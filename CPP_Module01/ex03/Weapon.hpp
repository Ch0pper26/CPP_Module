/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:21:42 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/16 12:13:26 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	public:

	Weapon();
	~Weapon();
	Weapon(std::string type);

	void	setType(std::string type);
	const std::string&	getType(void);

	private:

	std::string type;
};

#endif
