/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 23:03:58 by kecheong          #+#    #+#             */
/*   Updated: 2025/01/07 02:02:36 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

/* Apply a function onto each element of an array */
template<typename Type, typename Function>
void	iter(Type* array, std::size_t len, Function fn)
{
	for (size_t i = 0; i < len; ++i)
	{
		fn(array[i]);
	}
}

#endif
