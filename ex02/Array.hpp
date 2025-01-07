/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 23:33:07 by kecheong          #+#    #+#             */
/*   Updated: 2025/01/08 05:25:32 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

namespace
{
	const char*	GREEN = "\033[0;32m";
	const char*	RED = "\033[0;31m";
	const char*	C_RESET = "\033[0m";
}

template<typename ElemType>
class	Array
{
public:
	Array(); // default construct empty array
	Array(unsigned int); // construct array with n elements
	Array(const Array&); // copy constructor
	Array&	operator=(const Array&); // assignment operator
	~Array();

	ElemType&		operator[](unsigned int index);
	const ElemType&	operator[](unsigned int index) const;
	unsigned int	size() const;

private:
	unsigned int	elemCount;
	ElemType		*elements;
};

/* Default constructor */
template<typename ElemType>
Array<ElemType>::Array():
elemCount(0),
elements(new ElemType[0])
{
	std::cout << GREEN << "Array default constructor called"
			  << C_RESET << '\n';
}

/* Constructor */
template<typename ElemType>
Array<ElemType>::Array(unsigned int numElems):
elemCount(numElems),
elements(new ElemType[elemCount]())
{
	std::cout << GREEN << "Array constructor called"
			  << C_RESET << '\n';
}

/* Copy constructor */
template<typename ElemType>
Array<ElemType>::Array(const Array<ElemType>& other):
elemCount(other.elemCount),
elements(new ElemType[elemCount])
{
	std::cout << GREEN << "Array copy constructor called"
			  << C_RESET << '\n';

	for (unsigned int i = 0; i < other.size(); ++i)
	{
		elements[i] = other[i];
	}
}

/* Copy assignment operator */
template<typename ElemType>
Array<ElemType>&	Array<ElemType>::operator=(const Array<ElemType>& rhs)
{
	std::cout << GREEN << "Array copy assignment operator called"
			  << C_RESET << '\n';

	if (this != &rhs)
	{
		delete[] elements;
		elemCount = rhs.size();
		elements = new ElemType[size()];
		for (unsigned int i = 0; i < rhs.size(); ++i)
		{
			elements[i] = rhs[i];
		}
	}
	return *this;
}

/* Destructor */
template<typename ElemType>
Array<ElemType>::~Array()
{
	std::cout << RED << "Array destructor called" << C_RESET <<'\n';

	delete[] elements;
}

/* Overload subscript operator */
template<typename ElemType>
ElemType&	Array<ElemType>::operator[](unsigned int index)
{
	if (index >= elemCount)
	{
		throw std::exception();
	}
	return elements[index];
}

/* Overload subscript operator */
template<typename ElemType>
const ElemType&	Array<ElemType>::operator[](unsigned int index) const
{
	if (index >= elemCount)
	{
		throw std::exception();
	}
	return elements[index];
}

template<typename ElemType>
unsigned int	Array<ElemType>::size() const
{
	return elemCount;
}

/* Overload << operator */
template<typename ElemType>
std::ostream&	operator<<(std::ostream& os, const Array<ElemType>& arr)
{
	std::cout << "Array of size " << arr.size() << ": |";
	for (unsigned int i = 0; i < arr.size(); ++i)
	{
		std::cout << arr[i] << "|";
	}
	std::cout << '\n';
	return os;
}

#endif
