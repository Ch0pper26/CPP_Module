/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:33:33 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/13 11:52:52 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main(void)
{
	std::cout << "Int stack:" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top stack " << mstack.top() << std::endl << std::endl;

	mstack.pop();

	std::cout << "Stack size " << mstack.size() << std::endl;
	std::cout << "Top stack " << mstack.top() << std::endl << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl;
	std::cout << "Int copy stack:" << std::endl;

	MutantStack<int> s(mstack);

	MutantStack<int>::iterator itb = s.begin();
	MutantStack<int>::iterator iten = s.end();

	while (itb != iten)
	{
		std::cout << *itb << std::endl;
		++itb;
	}

	std::cout << std::endl;
	std::cout << "Char stack:" << std::endl;

	MutantStack<char> cstack;

	cstack.push('H');
	cstack.push('e');
	cstack.push('l');
	cstack.push('l');
	cstack.push('o');
	cstack.push('!');

	MutantStack<char>::iterator itbe = cstack.begin();
	MutantStack<char>::iterator itend = cstack.end();

	while (itbe != itend)
	{
		std::cout << *itbe;
		++itbe;
	}

	std::cout << std::endl;

	return (0);
}
