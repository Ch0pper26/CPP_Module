/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:06:49 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/11 11:50:23 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	std::string a = "Allo";
	int b[5] = {1, 2, 3, 4, 5};

	::iter(a.c_str(), a.size(), &display);

	std::cout << std::endl;

	::iter(b, 5, &display);
}
