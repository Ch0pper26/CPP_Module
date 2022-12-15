/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:34:47 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/05 15:34:42 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter
{
	public:

	Character(void);
	Character(std::string name);
	Character(const Character& toCopy);
	~Character(void);

	Character& operator=(const Character& toCopy);

	virtual std::string const& getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	private:

	int			len;
	std::string _name;
	AMateria *_inventory[4];
	AMateria **_save_materia;
	void	save_Material(AMateria *m);

};

#endif
