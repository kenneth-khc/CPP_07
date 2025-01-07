/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 23:33:07 by kecheong          #+#    #+#             */
/*   Updated: 2025/01/08 05:06:18 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

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

template<typename ElemType>
std::ostream&	operator<<(std::ostream& os, const Array<ElemType>& arr)
{
	std::cout << "Array of size " << arr.size() << ": ";
	for (unsigned int i = 0; i < arr.size(); ++i)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
	return os;
}

/* Default constructor */
template<typename ElemType>
Array<ElemType>::Array():
elemCount(0),
elements(new ElemType[0])
{
	std::cout << "Array default constructor called\n";
}

/* Constructor */
template<typename ElemType>
Array<ElemType>::Array(unsigned int numElems):
elemCount(numElems),
elements(new ElemType[elemCount]())
{
	std::cout << "Array constructor called\n";
}

/* Copy constructor */
template<typename ElemType>
Array<ElemType>::Array(const Array<ElemType>& other):
elemCount(other.elemCount),
elements(new ElemType[elemCount])
{
	std::cout << "Array copy constructor called\n";

	for (unsigned int i = 0; i < other.size(); ++i)
	{
		elements[i] = other[i];
	}
}

/* Copy assignment operator */
template<typename ElemType>
Array<ElemType>&	Array<ElemType>::operator=(const Array<ElemType>& rhs)
{
	delete[] elements;
	elemCount = rhs.size();
	elements = new ElemType[size()];
	for (unsigned int i = 0; i < rhs.size(); ++i)
	{
		elements[i] = rhs[i];
	}
	return *this;
}

/* Destructor */
template<typename ElemType>
Array<ElemType>::~Array()
{
	std::cout << "Array destructor called\n";

	delete[] elements;
}

template<typename ElemType>
ElemType&	Array<ElemType>::operator[](unsigned int index)
{
	if (index >= elemCount)
	{
		throw std::exception();
	}
	return elements[index];
}

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

#endif
