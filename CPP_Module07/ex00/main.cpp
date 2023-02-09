/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:06:49 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/11 11:25:18 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	std::string a = "Allo";
	std::string b = "Bonjour";

	int	c = 10;
	int	d = 20;

	char e = 'e';
	char f = 'e';

	std::cout << "a = " << a << " | b = " << b << std::endl;
	std::cout << ::max(a, b) << std::endl;
	std::cout << ::min(a, b) << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << " | b = " << b << std::endl;

	std::cout << std::endl;

	std::cout << "c = " << c << " | d = " << d << std::endl;
	std::cout << ::max<int>(c, d) << std::endl;
	std::cout << ::min<int>(c, d) << std::endl;
	::swap<int>(c, d);
	std::cout << "c = " << c << " | d = " << d << std::endl;

	std::cout << std::endl;

	std::cout << "e = " << e << " | f = " << f << std::endl;
	std::cout << ::max<char>(e, f) << std::endl;
	std::cout << ::min<char>(e, f) << std::endl;
	::swap<char>(e, f);
	std::cout << "e = " << e << " | f = " << f << std::endl;
}
