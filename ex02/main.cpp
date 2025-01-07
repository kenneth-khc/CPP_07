/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 23:32:56 by kecheong          #+#    #+#             */
/*   Updated: 2025/01/08 05:25:23 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template<typename Type>
void	println(Type t)
{
	std::cout << t << '\n';
}

int	main()
{
	println("Constructing empty array");
	{
		Array<char> emptyArray = Array<char>();
		std::cout << emptyArray;
	}
	println("----------------------------");

	println("Constructing array of ten floats");
	{
		Array<float> tenFloats = Array<float>(10);
		std::cout << tenFloats;
	}
	println("----------------------------");

	println("Constructing array of five ints, setting each to 42");
	{
		Array<int> fiveInts = Array<int>(5);
		std::cout << fiveInts;
		println("Setting each int to 42");
		for (unsigned int i = 0; i < 5; ++i)
		{
			fiveInts[i] = 42;
		}
		std::cout << fiveInts;

		println("Copy construct a new array from the existing one");
		Array<int> copyFiveInts = fiveInts;
		std::cout << copyFiveInts;

		println("Default construct an array, then assign it with existing one");
		Array<int> anotherFiveInts = Array<int>();
		anotherFiveInts = copyFiveInts;
		std::cout << anotherFiveInts;
		// self assignment is checked against
		anotherFiveInts = anotherFiveInts;
		std::cout << anotherFiveInts;
	}
}
