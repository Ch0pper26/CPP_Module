/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:08:39 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/25 12:08:19 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	const Point a(-4,-8);
	const Point b(12,2);
	const Point c(-4,6);
	const Point p(2,-2);

	if (bsp (a, b, c, p) == true)
		std::cout << "p is inside" << std::endl;
	else
		std::cout << "p is outside" << std::endl;

	const Point d(4,-2);
	const Point e(16,-4);
	const Point f(6,-10);
	const Point p1(8,-6);

	if (bsp (d, e, f, p1) == true)
		std::cout << "p1 is inside" << std::endl;
	else
		std::cout << "p1 is outside" << std::endl;

	const Point g(4,-2);
	const Point h(16,-4);
	const Point i(6,-10);
	const Point p2(i);

	if (bsp (g, h, i, p2) == true)
		std::cout << "p2 is inside" << std::endl;
	else
		std::cout << "p2 is outside" << std::endl;


	return (0);
}
