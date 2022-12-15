/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:00:34 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/05 17:13:35 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* Constructor and Destructor */

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_materia_save[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& toCopy)
{
	*this = toCopy;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete _materia_save[i];
}

/* Member Function */
/* --  Public  -- */

void	MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia_save[i] == NULL)
		{
			_materia_save[i] = materia;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia_save[i]->getType() == type)
		{
			AMateria *tmp = _materia_save[i]->clone();
			return (tmp);
		}
	}
	return (NULL);
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

MateriaSource& MateriaSource::operator=(const MateriaSource& toCopy)
{
	if (this == &toCopy)
		return (*this);
	for (int i = 0; i < 4; i++)
		delete this->_materia_save[i];
	for (int i = 0; i < 4; i++)
		this->_materia_save[i] = toCopy._materia_save[i]->clone();
	return (*this);
}
