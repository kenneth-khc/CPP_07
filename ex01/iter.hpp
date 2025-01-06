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

template<typename T, typename F>
void	iter(T*	arr, std::size_t arr_len, F func)
{
	for (size_t i = 0; i < arr_len; ++i)
	{
		func(arr[i]);
	}
}

#endif
