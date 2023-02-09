/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:53:35 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/11 14:14:19 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>
#include <string>

template <typename T>
class Array
{
	public:

		Array()
		{
			_tab = NULL;
			_size = 0;
		}

		Array(unsigned int n)
		{
			_tab = new T[n];
			_size = n;
		}

		Array(const Array& toCopy)
		{
			this->_tab = NULL;
			*this = toCopy;
		}

		~Array(void)
		{
			delete[] this->_tab;
		}

		unsigned int size(void) const
		{
			return (_size);
		}

		Array& operator=(const Array& toCopy)
		{
			unsigned int i = 0;

			if (this == &toCopy)
				return (*this);
			delete[] this->_tab;
			this->_tab = new T[toCopy._size];
			while (i < toCopy.size())
			{
				this->_tab[i] = toCopy._tab[i];
				i++;
			}
			this->_size = toCopy._size;
			return (*this);
		}

		T& operator[](unsigned int index)
		{
			if (index >= _size)
				throw(std::exception());
			else
				return (_tab[index]);
		}

	private:

		T*	_tab;
		unsigned int _size;
};

#endif
