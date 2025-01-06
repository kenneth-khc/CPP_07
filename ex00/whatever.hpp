/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 22:33:54 by kecheong          #+#    #+#             */
/*   Updated: 2025/01/06 22:46:07 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void	swap(T& lhs, T& rhs)
{
	T	temp = lhs;
	lhs = rhs;
	rhs = temp;
}

template<typename T>
T	min(const T& lhs, const T& rhs)
{
	if (lhs < rhs)
	{
		return lhs;
	}
	else
	{
		return rhs;
	}
}

template<typename T>
T	max(const T& lhs, const T& rhs)
{
	if (lhs > rhs)
	{
		return lhs;
	}
	else
	{
		return rhs;
	}
}

#endif
