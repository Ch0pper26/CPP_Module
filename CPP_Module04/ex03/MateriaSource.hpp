/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:00:34 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/05 11:52:02 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:

	MateriaSource(void);
	MateriaSource(const MateriaSource& toCopy);
	virtual void learnMateria(AMateria* materia);
	virtual AMateria* createMateria(std::string const & type);
	~MateriaSource(void);

	MateriaSource& operator=(const MateriaSource& toCopy);

	private:
	
	AMateria *_materia_save[4];
};

#endif
