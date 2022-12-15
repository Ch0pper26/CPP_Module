/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:33:47 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/23 09:53:36 by eblondee         ###   ########.fr       */
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

	Fixed& operator=(const Fixed& number);

	private:

	int	_number;	
	static const int _fractional_bit;

};

std::ostream& operator<<(std::ostream &flux, const Fixed& number);

#endif
