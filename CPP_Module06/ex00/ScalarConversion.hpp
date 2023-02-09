/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:34:19 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/10 10:37:22 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
#define SCALARCONVERSION_HPP

#include <exception>
#include <iostream>
#include <iomanip>
#include <climits>
#include <cstdlib>
#include <string>
#include <cmath>

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
		int		getPrecision(void) const;
		std::string getisPrint(void) const;

	private:

		double	_doubleConversion;
		float	_floatConversion;
		char	_charConversion;
		int		_intConversion;
		char	_firstType;
		int		_precision;
		std::string	_isPrint;

		char	charConversion(double toConvert);

		char	findType(std::string toFind) const;
		char	isDouble(std::string toFind) const;
		char	isFloat(std::string toFind) const;
		char	isChar(std::string toFind) const;
		char	isInt(std::string toFind) const;

		int		definePrecision(std::string number) const;
		int		nbOcc(std::string str, char c) const;
		bool	isNumber(std::string number) const;

		class ImpossibleConversionException : public std::exception
		{
			public :

				ImpossibleConversionException(std::string error);
				~ImpossibleConversionException(void) throw();

				virtual const char* what() const throw();

			private:

				std::string _error;
		};

};

std::ostream&	operator<<(std::ostream& flux, const ScalarConversion& toPrint);

#endif
