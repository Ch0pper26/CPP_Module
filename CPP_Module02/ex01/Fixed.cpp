/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:33:47 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/23 15:37:48 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	const Fixed::_fractional_bit = 8;

/* Constructor and Desctuctor */

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_number = 0;
}

Fixed::Fixed(int integer)
{
	std::cout << "Int constructor called" << std::endl;
	_number = integer * (1 << _fractional_bit);
}

Fixed::Fixed(float floater)
{
	std::cout << "Float constructor called" << std::endl;
	_number = roundf(floater * (1 << _fractional_bit));
}

Fixed::Fixed(const Fixed& fixed_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed_copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* Member Function */
/*  --  Public  -- */

void	Fixed::setRawBits(int const raw)
{
	_number = raw;
}

int		Fixed::getRawBits(void) const
{
	return (_number);	
}

float	Fixed::toFloat(void) const
{
	return ((float)_number / (1 << _fractional_bit));
}

int		Fixed::toInt(void) const
{
	return (_number / (1 << _fractional_bit));
}

void	Fixed::display(std::ostream &flux) const
{
	flux << this->toFloat();
}

/* --  Private  -- */

/* Nothing */

/* Operator */

Fixed& Fixed::operator=(const Fixed& fixedToCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&fixedToCopy == this)
		return (*this);
	_number = fixedToCopy.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream &flux, const Fixed& number)
{
	number.display(flux);
	return (flux);
}
