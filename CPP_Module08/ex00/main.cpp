/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:06:49 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/12 11:01:16 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void print(int i)
{
	std::cout << i << std::endl; 
}

int	main(void)
{
	std::vector<int> v;
	std::list<int> l;

	std::cout << "Vector :\n" << std::endl;

	for (int i = 0; i <= 10; i++)
		v.push_back(i);

	for_each(::easyfind(v, 7), v.end(), print);
	for_each(::easyfind(v, 11), v.end(), print);
	
	if (::easyfind(v, 11) == v.end())
		std::cout << "Error number not found" << std::endl;

	std::cout << "\nList :\n" << std::endl;

	for (int i = 0; i <= 10; i++)
		l.push_back(i);

	for_each(::easyfind(l, 7), l.end(), print);
	for_each(::easyfind(l, 11), l.end(), print);
	
	if (::easyfind(l, 11) == l.end())
		std::cout << "Error number not found" << std::endl;
}
