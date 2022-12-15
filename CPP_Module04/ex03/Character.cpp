/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:34:47 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/05 16:14:18 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructor and Destructor */

Character::Character(void)
{
	len = 0;
	_name = "Jones";
	_save_materia = new AMateria*[1];
	_save_materia[0] = NULL;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name)
{
	len = 0;
	_name = name;
	_save_materia = new AMateria*[1];
	_save_materia[0] = NULL;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& toCopy)
{
	len = 0;
	_save_materia = new AMateria*[1];
	_save_materia[0] = NULL;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	*this = toCopy;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
	for (int i = 0; i < len; i++)
		delete _save_materia[i];
	delete[] _save_materia;
}

/* Member Function */
/* --  Public  -- */

std::string const& Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	else
	{
		if (_inventory[idx] == NULL)
			return ;
		this->save_Material(_inventory[idx]);
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return ;
	else
		_inventory[idx]->use(target);
}

/* --  Private -- */

void	Character::save_Material(AMateria *m)
{
	AMateria  **tmp;
	int	j = 0;

	for (int i = 0; i < len; i++)
	{
		if (m == _save_materia[i])
			return ;
	}
	len++;
	tmp = new AMateria*[len + 1];
	while (_save_materia[j])
	{
		tmp[j] = _save_materia[j];
		j++;
	}
	tmp[j] = m;
	tmp[j + 1] = NULL;
	delete[] _save_materia;
	_save_materia = tmp;
}

/* Operator */
/* -- Assigment -- */

Character& Character::operator=(const Character& toCopy)
{
	if (this == &toCopy)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (toCopy._inventory[i])
			_inventory[i] = toCopy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	_name = toCopy._name;
	return (*this);
}

