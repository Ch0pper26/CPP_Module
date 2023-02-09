/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:57:50 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/11 11:21:03 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
T	max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

template<typename T>
T	min(const T& a, const T& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
void	swap(T& a, T& b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}


#endif
