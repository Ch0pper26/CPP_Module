/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:32:29 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/25 11:18:57 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:

	Point(void);
	Point(const float x, const float y);
	Point(const Point& Point_copy);
	~Point(void);

	Fixed	getx(void) const;
	Fixed	gety(void) const;
	int	getRawx(void) const;
	int	getRawy(void) const;

	Point& operator=(const Point& pointToCopy);

	private:

	const Fixed x;
	const Fixed y;
};

#endif
