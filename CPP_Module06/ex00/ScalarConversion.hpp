/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:34:19 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/15 10:15:02 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
#define SCALARCONVERSION_HPP

#include <exception>
#include <iostream>
#include <climits>
#include <cstdlib>
#include <string>

class ScalarConversion
{
	public:

		ScalarConversion(void);
		ScalarConversion(std::string toConvert);
		ScalarConversion(const ScalarConversion& toCopy);
		~ScalarConversion(void);

		ScalarConversion& operator=(const ScalarConversion& toCopy);

		double	getDouble(void) const;
		float	getFloat(void) const;
		char	getChar(void) const;
		int		getInt(void) const;	

	private:

		double	_doubleConversion;
		float	_floatConversion;
		char	_charConversion;
		int		_intConversion;
		char	_firstType;
		std::string	_isPrint[4];

		double	doubleConversion(std::string toConvert);
		float	floatConversion(std::string toConvert);
		char	charConversion(std::string toConvert);
		int		intConversion(std::string toConvert);

		char	findType(std::string toFind) const;
		char	isDouble(std::string toFind) const;
		char	isFloat(std::string toFind) const;
		char	isChar(std::string toFind) const;
		char	isInt(std::string toFind) const;
		int		nbOcc(std::string str, char c) const;
		bool	isNumber(std::string number) const;

};

std::ostream&	operator<<(std::ostream& flux, const ScalarConversion& toPrint);

#endif
