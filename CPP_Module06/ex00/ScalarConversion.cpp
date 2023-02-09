	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:34:19 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/10 11:01:13 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

/* Constructor and Destructor */

ScalarConversion::ScalarConversion(void)
{
	_intConversion = atoi("42");
	_doubleConversion = static_cast<double>(_intConversion);
	_floatConversion = static_cast<float>(_intConversion);
	_charConversion = static_cast<char>(_intConversion);
	_firstType = 'i';
	_isPrint = "pp";
	_precision = 1;
}

ScalarConversion::ScalarConversion(std::string toConvert)
{
	_isPrint = "ii";
	_firstType = findType(toConvert);
	_precision = definePrecision(toConvert);
	switch (_firstType)
	{
		case 'c':
			_isPrint[0] = 'p';
			_charConversion = toConvert[0];
			if (_charConversion < 32 || _charConversion == 127)
				_isPrint[0] = 'd';
			_doubleConversion = static_cast<double>(_charConversion);
			_floatConversion = static_cast<float>(_charConversion);
			_intConversion = static_cast<int>(_charConversion);
			_isPrint[1] = 'p';
			break;

		case 'i':
			_intConversion = atoi(toConvert.c_str());
			_isPrint[1] = 'p';
			_floatConversion = static_cast<float>(_intConversion);
			_doubleConversion = static_cast<double>(_intConversion);
			_charConversion = charConversion(_doubleConversion);
			break;

		case 'f':
			_floatConversion = strtof(toConvert.c_str(), NULL);
			_doubleConversion = static_cast<double>(_floatConversion);
			_charConversion = charConversion(_doubleConversion);
			if (_floatConversion <= INT_MAX && _floatConversion >= INT_MIN )
			{
				_intConversion = static_cast<int>(_floatConversion);
				_isPrint[1] = 'p';
			}
			else
			{
				_intConversion = 0;
				_isPrint[1] = 'i';
			}
			break;
		
		case 'd':
			_doubleConversion = strtod(toConvert.c_str(), NULL);
			_floatConversion = static_cast<float>(_doubleConversion);
			_charConversion = charConversion(_doubleConversion);
			if (_doubleConversion <= INT_MAX && _doubleConversion >= INT_MIN )
			{
				_intConversion = static_cast<int>(_doubleConversion);
				_isPrint[1] = 'p';
			}
			else
			{
				_intConversion = 0;
				_isPrint[1] = 'i';
			}
			break;

		default:
			throw (ImpossibleConversionException("Error : Impossible Conversion"));
			break;
	}
}

ScalarConversion::ScalarConversion(const ScalarConversion& toCopy)
{
	*this = toCopy;
}

ScalarConversion::~ScalarConversion(void)
{
}

/* Member Function */
/* --  Public  -- */
/* -- Get -- */

double	ScalarConversion::getDouble(void) const
{
	return (_doubleConversion);
}

float	ScalarConversion::getFloat(void) const
{
	return (_floatConversion);
}

char	ScalarConversion::getChar(void) const
{
	return (_charConversion);
}

int		ScalarConversion::getInt(void) const
{
	return (_intConversion);
}

int		ScalarConversion::getPrecision(void) const
{
	return (_precision);
}

std::string ScalarConversion::getisPrint(void) const
{
	return (_isPrint);
}

/* --  Private -- */
/* -- Conversion -- */

char	ScalarConversion::charConversion(double toConvert)
{
	int		tmp;
	char	c;

	tmp = static_cast<int>(toConvert);
	if (tmp == toConvert && toConvert >= 0 && toConvert <= 127)
	{
		c = static_cast<char>(tmp);
		if (tmp < 32 || tmp == 127)
			_isPrint[0] = 'd';
		else
			_isPrint[0] = 'p';
	}
	else
	{
		c = 0;
		_isPrint[2] = 'i';
	}
	return (c);
}

/* -- Is Type -- */

char	ScalarConversion::findType(std::string toFind) const
{
	char	type;

	type = '\0';
	type = isChar(toFind);
	if (type == '\0' && (toFind == "-inff" || toFind == "+inff"
			|| toFind == "nanf" || toFind == "inff"))
		type = 'f';
	if (type == '\0' && (toFind == "-inf" || toFind == "+inf"
			|| toFind == "nan" || toFind == "inf"))
		type = 'd';
	if (type == '\0' && (nbOcc(toFind, '.') > 1 || nbOcc(toFind, 'f') > 1
			|| nbOcc(toFind, '-') > 1 || !isNumber(toFind)))
		type = 'e';
	if (type == '\0')
		type = isFloat(toFind);
	if (type == '\0')
		type = isDouble(toFind);
	if (type == '\0')
		type = isInt(toFind);
	return (type);
}

char	ScalarConversion::isChar(std::string toFind) const
{
	if (toFind.size() > 1)
		return ('\0');
	if (isdigit(toFind[0]))
		return ('\0');
	else
		return ('c');
}

char	ScalarConversion::isFloat(std::string toFind) const
{
	int	tmp;

	if (nbOcc(toFind, 'f') == 0)
		return ('\0');
	tmp = toFind.find(".");
	if (tmp == -1)
		return ('e');
	if (tmp == 0 && isdigit(toFind[tmp + 1]) == 0)
		return ('e');
	else if (tmp == ((int)toFind.size() - 2)
			&& (tmp == 0 || isdigit(toFind[tmp - 1]) == 0))
		return ('e');	
	return ('f');
}

char	ScalarConversion::isDouble(std::string toFind) const
{
	if ((int)toFind.find(".") == -1)
		return ('\0');
	return ('d');
}

char	ScalarConversion::isInt(std::string toFind) const
{
	if (atoll(toFind.c_str()) > INT_MAX || atoll(toFind.c_str()) < INT_MIN)
		return ('e');
	return ('i');
}

/* -- Utils -- */

int		ScalarConversion::definePrecision(std::string number) const
{
	int	i = number.find(".") + 1;
	int	precision = 0;

	if (_firstType == 'c' || _firstType == 'i')
		return (1);
	if (number[i] == '\0'|| number[i] == 'f')
		return (1);
	while (number[i] && number[i] != 'f')
	{
		precision++;
		i++;
	}
	return (precision);
}

int		ScalarConversion::nbOcc(std::string str, char c) const
{
	int	occ = 0;
	int	i = 0;

	while (str[i])
	{
		if (str[i] == c)
			occ++;
		i++;
	}
	return (occ);
}

bool	ScalarConversion::isNumber(std::string number) const
{
	int	i = 0;

	if (number[i] == '-')
		i++;
	while (i < (int)number.size())
	{
		if ((i + 1) == (int)number.size() && number[i] == 'f')
			return (true);
		if (isdigit(number[i]) == 0 && number[i] != '.')
			return (false);
		i++;
	}
	return (true);
}

/* Impossible Conversion Exception */

ScalarConversion::ImpossibleConversionException::ImpossibleConversionException(std::string error)
{
	_error = error;
}

ScalarConversion::ImpossibleConversionException::~ImpossibleConversionException(void) throw()
{
}

const char* ScalarConversion::ImpossibleConversionException::what() const throw()
{
	return (_error.c_str());
}

/* Operator */
/* -- Assigment -- */

ScalarConversion& ScalarConversion::operator=(const ScalarConversion& toCopy)
{
	if (this == &toCopy)
		return (*this);
	_doubleConversion = toCopy._doubleConversion;
	_floatConversion = toCopy._floatConversion;
	_charConversion = toCopy._charConversion;
	_intConversion = toCopy._intConversion;
	_firstType = toCopy._firstType;
	_isPrint = toCopy._isPrint;
	_precision = toCopy._precision;
	return (*this);
}

/* -- Insertion -- */

std::ostream&	operator<<(std::ostream& flux, const ScalarConversion& toPrint)
{
	int	precision;

	precision = toPrint.getPrecision();
	std::string	print = toPrint.getisPrint();

	if (print[0] == 'p')
		flux << "char: '" << toPrint.getChar() << "'" << std::endl;
	else if (print[0] == 'd')
		flux << "char: Non displayable" << std::endl;
	else
		flux << "char : impossible" << std::endl;

	if (print[1] == 'p')
		flux << "int: " << toPrint.getInt() << std::endl;
	else
		flux << "int: impossible" << std::endl;

	flux << "float: " << std::fixed << std::setprecision(precision) 
			<< toPrint.getFloat() << 'f' << std::endl;
	
	flux << "double: " << std::fixed << std::setprecision(precision) 
			<< toPrint.getDouble();

	return (flux);
}
