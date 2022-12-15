/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:33:47 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/21 18:37:09 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	const Fixed::fractional_bit = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_number = 0;
}

Fixed::Fixed(const Fixed& fixed_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed_copy;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_number = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_number);	
}

Fixed& Fixed::operator=(const Fixed& number)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&number == this)
		return (*this);
	_number = number.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
