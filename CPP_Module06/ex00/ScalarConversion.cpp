/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:34:19 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/15 18:05:26 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

/* Constructor and Destructor */

ScalarConversion::ScalarConversion(void)
{
	_doubleConversion = ScalarConversion::doubleConversion("42");
	_floatConversion = floatConversion("42");
	_charConversion = charConversion("42");
	_intConversion = intConversion("42");
	_firstType = 'i';
	_isPrint = "pppp";
}

ScalarConversion::ScalarConversion(std::string toConvert)
{
	_isPrint = "iiii";
	_firstType = findType(toConvert);
	if (_firstType == 'e')
		throw (std::exception());
	std::cout << _firstType << std::endl;
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

/* --  Private -- */
/* -- Conversion -- */

double	ScalarConversion::doubleConversion(std::string toConvert)
{
	double	tmp ;

	_isPrint[0] = 'p';
	if (_firstType == 'c')
	{
		tmp = (double) toConvert[0];
		return (tmp);
	}
	//nan inf
	tmp = strtod(toConvert.c_str(), NULL);
	return (tmp);
}

float	ScalarConversion::floatConversion(std::string toConvert)
{
	float	tmp ;

	_isPrint[1] = 'p';
	if (_firstType == 'c')
	{
		tmp = (float) toConvert[0];
		return (tmp);
	}
	//nanf inff
	tmp = strtof(toConvert.c_str(), NULL);
	return (tmp);
}

char	ScalarConversion::charConversion(std::string toConvert)
{
	char	*endPtr;
	long	tmp;
	char	c;
	int		i;

	if (_firstType == 'c')
	{
		c = toConvert[0];
		
		return (c);
	}
	tmp = strtol(toConvert.c_str(), &endPtr, 10);
	if (tmp > 127 || tmp < 0)
	{
		_isPrint[2] = 'i';
		return (0);
	}
	while (tmp[i])
	{
		if (tmp[i] != '0' && tmp[i] != '.' && tmp[i] != 'f')
		{
			_isPrint[2] = 'i';
			return (0);
		}
	}
	// non disp
	c = (int) tmp;
	_isPrint[2] = 'p';
	return (tmp);
}

int		ScalarConversion::intConversion(std::string toConvert)
{
	char	*endPtr;
	long	tmp ;

	if (_firstType == 'c')
	{
		tmp = (int) toConvert[0];
		return (tmp);
	}
	tmp = strtol(toConvert.c_str(), &endPtr, 10);
	if (!endPtr[0] || tmp > INT_MAX || tmp < INT_MIN)
	{
		std::cout << "Can't convert this string to int" << std::endl;
		return (0);
	}
	return (tmp);
}

/* -- Is Type -- */

char	ScalarConversion::findType(std::string toFind) const
{
	char	type;

	type = '\0';
	type = isChar(toFind);
	if (type == '\0' && (toFind == "-inff" || toFind == "+inff" || toFind == "nanf"))
		type = 'f';
	if (type == '\0' && (toFind == "-inf" || toFind == "+inf" || toFind == "nan"))
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
	std::cout << (int)toFind.find(".") << std::endl;
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
	return (*this);
}

/* -- Insertion -- */

std::ostream&	operator<<(std::ostream& flux, const ScalarConversion& toPrint)
{
	(void) toPrint;
	return (flux);
}
