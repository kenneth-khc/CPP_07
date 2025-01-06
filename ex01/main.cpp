/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 23:06:59 by kecheong          #+#    #+#             */
/*   Updated: 2025/01/07 02:41:37 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstddef>
#include "iter.hpp"

template<typename T>
void	println(const T& t)
{
	std::cout << t << '\n';
}

template<typename T>
void	printArr(const T& t, std::size_t len)
{
	for (std::size_t i = 0; i < len; ++i)
	{
		std::cout << t[i] << " | ";
	}
	std::cout << '\n';
}

template<typename Num>
void	doubleNum(Num& num)
{
	num *= 2;
}

template<typename T>
void	plusOne(T& t)
{
	t += 1;
}

template<typename T>
void	minusThirtyTwo(T& t)
{
	t -= 32;
}

//class	Point
//{
//public:
//	Point(int x, int y): x(x), y(y) { }
//	Point	operator+(Point& rhs)
//	{ Point newPoint(x + rhs.x, y + rhs.y); return newPoint; }
//	Point&	operator+=(int rhs)
//	{ x += rhs; y += rhs; return *this; }
//	Point&	operator*=(int rhs)
//	{ x *= rhs; y *= rhs; return *this; }
//	int	x;
//	int y;
//};
//std::ostream&	operator<<(std::ostream& os, const Point& p)
//{
//	std::cout << "(" << p.x << ", " << p.y << ")";
//	return os;
//}

int	main(int, char**)
{
	const int	SIZE = 10;
	println("Array of ints");
	{
		int	arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

		printArr(arr, SIZE);
		iter(arr, SIZE, doubleNum<int>);
		printArr(arr, SIZE);
		iter(arr, SIZE, plusOne<int>);
		printArr(arr, SIZE);
	}
	println("-----------------------");
	println("Array of chars");
	{
		char	arr[SIZE] = {
			'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
		printArr(arr, SIZE);
		iter(arr, SIZE, plusOne<char>);
		printArr(arr, SIZE);
		iter(arr, SIZE, minusThirtyTwo<char>);
		printArr(arr, SIZE);
	}
	println("-----------------------");
	println("Array of chars");
	{
		char	arr[SIZE] = {
			'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
		printArr(arr, SIZE);
		iter(arr, SIZE, minusThirtyTwo<char>);
		printArr(arr, SIZE);
		iter(arr, SIZE, plusOne<char>);
		printArr(arr, SIZE);
	}
	println("-----------------------");
	println("Array of unsigned chars");
	{
		unsigned char	arr[SIZE] = {
			'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
		printArr(arr, SIZE);
		iter(arr, SIZE, plusOne<unsigned char>);
		printArr(arr, SIZE);
		iter(arr, SIZE, minusThirtyTwo<unsigned char>);
		printArr(arr, SIZE);
	}
	println("-----------------------");
	println("Array of floats");
	{
		float	arr[SIZE] = {
			0.1f, 1.1f, 2.1f, 3.1f, 4.1f, 5.1f, 6.1f, 7.1f, 8.1f, 9.1f};
		printArr(arr, SIZE);
		iter(arr, SIZE, plusOne<float>);
		printArr(arr, SIZE);
		iter(arr, SIZE, doubleNum<float>);
		printArr(arr, SIZE);
	}
	println("-----------------------");
	println("Array of doubles");
	{
		double	arr[SIZE] = {
			0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5};
		printArr(arr, SIZE);
		iter(arr, SIZE, plusOne<double>);
		printArr(arr, SIZE);
		iter(arr, SIZE, doubleNum<double>);
		printArr(arr, SIZE);
	}
	println("-----------------------");
	//println("Array of Points");
	//{
	//	Point	arr[5] = {
	//		Point(0,0), Point(1,1), Point(2,2), Point(3,5), Point(6,9)};
	//	printArr(arr, 5);
	//	iter(arr, 5, plusOne<Point>);
	//	printArr(arr, 5);
	//	iter(arr, 5, doubleNum<Point>);
	//	printArr(arr, 5);
	//}
	//println("-----------------------");
}
