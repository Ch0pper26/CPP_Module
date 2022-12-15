/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:33:47 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/24 15:03:18 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	const Fixed::_fractional_bit = 8;

/* Constructor and Desctuctor */

Fixed::Fixed()
{
	_number = 0;
}

Fixed::Fixed(int integer)
{
	_number = integer * (1 << _fractional_bit);
}

Fixed::Fixed(float floater)
{
	_number = roundf(floater * (1 << _fractional_bit));
}

Fixed::Fixed(const Fixed& fixed_copy)
{
	*this = fixed_copy;
}

Fixed::~Fixed()
{
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

Fixed& Fixed::min(Fixed& num1, Fixed& num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}

const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2)
{
	if (num1.getRawBits() < num2.getRawBits())
		return (num1);
	else
		return (num2);
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}

/* --  Private  -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

Fixed& Fixed::operator=(const Fixed& fixedToCopy)
{
	if (&fixedToCopy == this)
		return (*this);
	_number = fixedToCopy.getRawBits();
	return (*this);
}

/* -- Insertion -- */

std::ostream& operator<<(std::ostream &flux, const Fixed& number)
{
	number.display(flux);
	return (flux);
}

/* -- Comparaison -- */

bool Fixed::operator>(const Fixed& num1) const
{
	if (this->getRawBits() > num1.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<(const Fixed& num1) const
{
	if (this->getRawBits() < num1.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed& num1) const
{
	if (this->getRawBits() >= num1.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed& num1) const
{
	if (this->getRawBits() <= num1.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator==(const Fixed& num1) const
{
	if (this->getRawBits() == num1.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed& num1) const
{
	if (this->getRawBits() != num1.getRawBits())
		return (true);
	else
		return (false);
}

/* -- Arithmetic -- */

Fixed Fixed::operator+(const Fixed& num1)
{
	Fixed number;

	number.setRawBits(this->getRawBits() + num1.getRawBits());
	return (number); 
}

Fixed Fixed::operator-(const Fixed& num1)
{
	Fixed number;

	number.setRawBits(this->getRawBits() - num1.getRawBits());
	return (number); 
}

Fixed Fixed::operator*(const Fixed& num1)
{
	Fixed number(*this);

	number *= num1;
	return (number); 
}

Fixed& Fixed::operator*=(const Fixed& num1)
{
	_number = this->getRawBits() * num1.getRawBits();
	_number = _number / (1 << _fractional_bit);
	return (*this);
}

Fixed Fixed::operator/(const Fixed& num1)
{
	if (num1.getRawBits() == 0)
	{
		std::cout << "Forbidden division by zero" << std::endl;
		return (*this);
	}
	Fixed number((float)this->getRawBits() / (float)num1.getRawBits());

	return (number);
}

/* -- Incrementation -- */

Fixed& Fixed::operator++()
{
	_number++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	++(*this);
	return (tmp);
}

/* -- Decrementation -- */

Fixed& Fixed::operator--()
{
	_number--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	--(*this);
	return (tmp);
}
