/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:01:56 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/25 11:44:55 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int operation ( Point const V1, Point const V2, Point const point)
{
	int first = (V1.getRawx() - point.getRawx()) * (V2.getRawy() - point.getRawy());
	int	second = (V1.getRawy() - point.getRawy()) * (V2.getRawx() - point.getRawx());

	return (first - second);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (operation(c, a , point) > 0)
		if (operation(a, b, point) > 0)
			if (operation(b, c, point) > 0)
				return (true);
	if (operation(c, a , point) < 0)
		if (operation(a, b, point) < 0)
			if (operation(b, c, point) < 0)
				return (true);
	return (false);
}
