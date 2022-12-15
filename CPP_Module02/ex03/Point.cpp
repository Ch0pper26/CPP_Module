/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:32:28 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/25 12:07:57 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Constructor and Destructor */

Point::Point(void) : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x) , y(y)
{
}

Point::Point(const Point& Point_copy) : x(Point_copy.x) , y(Point_copy.y)
{
}

Point::~Point()
{
}

/* Member Fuction */
/* --  Public  -- */

Fixed Point::getx(void) const
{
	return (x);
}

Fixed Point::gety(void) const
{
	return (y);
}

int	Point::getRawx(void) const
{
	return (x.getRawBits());
}

int	Point::getRawy(void) const
{
	return (y.getRawBits());
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* --Assigment -- */

Point& Point::operator=(const Point& pointToCopy)
{
	if (&pointToCopy == this)
		return (*this);
	(Fixed)x = pointToCopy.getx();
	(Fixed)y = pointToCopy.gety();
	return (*this);
}
