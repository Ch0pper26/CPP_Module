/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:59:02 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/12 16:30:20 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>

class Span
{
	public:

		Span(void);
		Span(unsigned int N);
		Span(const Span& toCopy);
		~Span(void);

		Span&	operator=(const Span& toCopy);

		void	addNumber(int num);
		void	addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);

		std::vector<int>	getVector(void);

		int	shortestSpan(void) const;
		int	longestSpan(void) const;

	private:

		int	_capacity;
		int	_maxCapacity;
		std::vector<int> _v;
	
		class FullSpan : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};

		class NoDistance : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};

		class EmptySpan : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream& flux,Span& toPrint);

#endif
