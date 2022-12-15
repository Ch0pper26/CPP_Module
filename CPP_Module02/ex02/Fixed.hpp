/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:33:47 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/24 16:33:54 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:

	Fixed(void);
	Fixed(int integer);
	Fixed(float floater);
	Fixed(const Fixed& Fixed_copy);
	~Fixed(void);

	void	setRawBits(int const raw);
	int		getRawBits(void) const;

	float	toFloat(void) const;
	int		toInt(void) const;
	
	void	display(std::ostream &flux) const;

	static Fixed& min(Fixed& num1, Fixed& num2);
	static const Fixed& min(const Fixed& num1, const Fixed& num2);
	static Fixed& max(Fixed& num1, Fixed& num2);
	static const Fixed& max(const Fixed& num1, const Fixed& num2);

	Fixed& operator=(const Fixed& fixedToCopy);
	Fixed& operator*=(const Fixed& num1);
	Fixed operator+(const Fixed& num1);
	Fixed operator-(const Fixed& num1);
	Fixed operator*(const Fixed& num1);
	Fixed operator/(const Fixed& num1);
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);


	bool operator>(const Fixed& num1) const;
	bool operator<(const Fixed& num1) const;
	bool operator>=(const Fixed& num1) const;
	bool operator<=(const Fixed& num1) const;
	bool operator==(const Fixed& num1) const;
	bool operator!=(const Fixed& num1) const;
	
	private:

	int	_number;	
	static const int _fractional_bit;

};

std::ostream& operator<<(std::ostream &flux, const Fixed& number);

#endif
