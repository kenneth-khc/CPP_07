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

template<typename Type>
void	swap(Type& lhs, Type& rhs)
{
	Type	temp = lhs;
	lhs = rhs;
	rhs = temp;
}

template<typename Type>
Type	min(const Type& lhs, const Type& rhs)
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

template<typename Type>
Type	max(const Type& lhs, const Type& rhs)
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
