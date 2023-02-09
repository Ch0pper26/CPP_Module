/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:59:02 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/12 16:51:19 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* Constructor and Destructor */

Span::Span(void)
{
	_capacity = 0;
	_maxCapacity = 0;
}

Span::Span(unsigned int num)
{
	_capacity = 0;
	_maxCapacity = num;
}

Span::Span(const Span& toCopy)
{
	*this = toCopy;
}

Span::~Span(void)
{
}

/* Member Function */
/* --  Public  -- */

void	Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	int	add_lenght = std::distance(start, end);
	int	remain_lenght = _maxCapacity - _capacity;

	if (add_lenght > remain_lenght)
		throw(FullSpan());

	_capacity += add_lenght;
	_v.insert(_v.end(), start, end);
}


void	Span::addNumber(int num)
{
	if (_capacity == _maxCapacity)
		throw(FullSpan());
	_v.push_back(num);
	_capacity++;
}

int	Span::shortestSpan(void) const
{
	int	min_dist;
	std::vector<int> tmp = _v;

	if (_capacity == 0)
		throw(EmptySpan());
	if (_capacity == 1)
		throw(NoDistance());

	std::sort(tmp.begin(), tmp.end());
	min_dist = tmp[1] - tmp[0];
	for (int i = 1; i < _capacity; i++)
	{
		if (min_dist > (tmp[i] - tmp[i - 1]))
			min_dist = tmp[i] - tmp[i - 1];
	}
	return (min_dist);
}

int	Span::longestSpan(void) const
{
	int min;
	int	max;

	if (_capacity == 0)
		throw(EmptySpan());
	if (_capacity == 1)
		throw(NoDistance());

	min = *std::min_element(_v.begin(),_v.end());
	max = *std::max_element(_v.begin(),_v.end());

	return (max - min);
}

std::vector<int> Span::getVector(void)
{
	return (_v);
}

/* --  Private -- */

/* Exception */
/* FullSpan */
const char* Span::FullSpan::what(void) const throw()
{
	return ("Can't add number");
}

/* NoDistance */

const char* Span::NoDistance::what(void) const throw()
{
	return ("There's no possible distance to calculate in the current span");
}

/* EmptySpan */
const char* Span::EmptySpan::what(void) const throw()
{
	return ("The current span is empty");
}

/* Operator */
/* -- Assigment -- */

Span& Span::operator=(const Span& toCopy)
{
	if (this == &toCopy)
		return (*this);
	this->_v = toCopy._v;
	this->_capacity = toCopy._capacity;
	this->_maxCapacity = toCopy._maxCapacity;
	return (*this);
}

/* -- Insertion -- */

std::ostream&	operator<<(std::ostream& flux, Span& toPrint)
{
	std::vector<int> vec = toPrint.getVector();

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		flux << *it << ' ';
	return (flux);
}
