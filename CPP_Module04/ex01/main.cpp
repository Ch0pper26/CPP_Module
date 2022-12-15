/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:07:01 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/30 10:37:40 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal* j = new Dog();
	Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout << std::endl;

	Cat *a = new Cat();
	Cat *b = new Cat(*(a));

	std::cout << std::endl;

	*(a) = *(b);

	std::cout << std::endl;

	delete a;
	delete b;

	std::cout << std::endl;

	Animal *tab[6];
	for (int i = 0; i < 6; i++)
	{
		if ((i%2) == 0)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < 6; i++)
		tab[i]->makeSound();

	std::cout << std::endl;

	for (int i = 0; i < 6; i++)
		delete tab[i];

	return (0);
}
