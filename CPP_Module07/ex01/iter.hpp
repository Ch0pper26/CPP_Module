/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:57:50 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/11 11:48:48 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void	display(T& elem)
{
	std::cout << "elem = " << elem << std::endl;
}

template<typename T>
void	iter(T* tab, int size, void (*f) (T&))
{
	int	i = 0;

	while (i < size)
	{
		f(tab[i]);
		i++;
	}
}

#endif
