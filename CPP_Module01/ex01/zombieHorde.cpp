/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:59:36 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/15 14:37:48 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name)
{
	Zombie	*horde;

	horde = new Zombie[N];
	for (int i = 0; i < N ; i++)
		horde[i].set_Name(name);
	return (horde);
}
