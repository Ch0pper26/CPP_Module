/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:33:47 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/21 18:34:31 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:

	Fixed(void);
	Fixed(const Fixed& Fixed_copy);

	void	setRawBits(int const raw);
	int	getRawBits(void) const;

	Fixed& operator=(const Fixed& number);

	~Fixed(void);

	private:

	int	_number;
	static const int fractional_bit;

};

#endif
