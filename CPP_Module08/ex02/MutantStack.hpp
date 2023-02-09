/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:53:52 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/13 11:48:56 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define NUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{

	public:

		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack(void) : MutantStack<T>::stack()
		{
		}

		MutantStack(const MutantStack<T>& toCopy) : MutantStack<T>::stack(toCopy)
		{
		}

		~MutantStack(void)
		{
		}

		MutantStack& operator=(const MutantStack& toCopy)
		{
			if (this = &toCopy)
				return (*this);
			this->MutantStack<T>::stack::operator=(toCopy);
			return (*this);
		}

		iterator begin() 
		{
			return (this->c.begin());
		};

		iterator end()
		{
			return (this->c.end());
		};
};

#endif
