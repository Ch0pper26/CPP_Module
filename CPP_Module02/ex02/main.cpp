/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:08:39 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/24 16:48:41 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	Fixed c(20);
	Fixed d(30);

	std::cout << "c = " << c << " | d = " << d << std::endl;

	if (c > d)
		std::cout << "c > d" << std::endl;
	else if (d > c)
		std::cout << "d > c" << std::endl;
	else
		std::cout << "c = d" << std::endl;

	if (c < d)
		std::cout << "c < d" << std::endl;
	else if (d < c)
		std::cout << "d < c" << std::endl;
	else
		std::cout << "c = d" << std::endl;

	if (c >= d)
		std::cout << "c >= d" << std::endl;
	else if (d >= c)
		std::cout << "d >= c" << std::endl;

	if (c <= d)
		std::cout << "c <= d" << std::endl;
	else if (d <= c)
		std::cout << "d <= c" << std::endl;

	if (c >= c)
		std::cout << "c >= c" << std::endl;

	if (d <= d)
		std::cout << "d <= d" << std::endl;
	
	if (c == c)
		std::cout << "c == c" << std::endl;

	if (c != d)
		std::cout << "c != d" << std::endl;

	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "d - c = " << d - c << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "d / c = " << d / c << std::endl;

	return 0;
}
