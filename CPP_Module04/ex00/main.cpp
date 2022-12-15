/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:07:01 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/30 10:47:50 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	WrongAnimal* a = new WrongCat();

	std::cout << std::endl;
	
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	a->makeSound();
	std::cout << a->getType() << std::endl;

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete a;

	return (0);
}
