/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:07:01 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/05 16:48:19 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	Character* bob = new Character(*(me));

	bob->unequip(0);

	me->use(0, *bob);
	me->use(1, *bob);

	bob->use(0, *me);

	Character* test = new Character("Try");

	bob->use(1, *test);
	
	delete bob;
	delete me;
	delete src;
	delete test;

	return 0;	
}
