/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 23:32:56 by kecheong          #+#    #+#             */
/*   Updated: 2025/05/16 22:31:53 by kecheong         ###   ########.fr       */
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
		println("Setting each float to 42.1f");
		for (std::size_t i = 0; i < tenFloats.size(); ++i)
		{
			tenFloats[i] = 42.1f;
		}
		std::cout << tenFloats;
	}
	println("----------------------------");

	println("Constructing array of five ints, setting each to 42");
	{
		Array<int> fiveInts = Array<int>(5);
		std::cout << fiveInts;
		println("Setting each int to 42");
		for (std::size_t i = 0; i < fiveInts.size(); ++i)
		{
			fiveInts[i] = 42;
		}
		std::cout << fiveInts;

		println("\nCopy construct a new array from the existing one");
		Array<int> copyFiveInts = fiveInts;
		std::cout << copyFiveInts;

		println("\nDefault construct an array, then assign it with existing one");
		Array<int> anotherFiveInts = Array<int>();
		std::cout << anotherFiveInts;
		std::cout << "Assigning array of 42s to default array...\n";
		anotherFiveInts = copyFiveInts;
		std::cout << anotherFiveInts;
		// self assignment is checked against
		//anotherFiveInts = anotherFiveInts;
		println("Modify one array and not the other");
		for (std::size_t i = 0; i < copyFiveInts.size(); ++i)
		{
			copyFiveInts[i] = 999;
		}
		std::cout << copyFiveInts;
		std::cout << anotherFiveInts;
	}
	println("----------------------------");

#if 1
	println("Constructing array of five strings");
	{
		Array<std::string> fiveStrings = Array<std::string>(5);
		std::cout << fiveStrings;
		for (std::size_t i = 0; i < fiveStrings.size(); ++i)
		{
			fiveStrings[i] = "Hello";
		}
		std::cout << fiveStrings;
		println("Accessing out of bounds...");
		try
		{
			fiveStrings[5] = "Goodbye";
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
#endif
}
