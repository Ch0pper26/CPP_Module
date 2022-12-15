/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:11:23 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/15 16:17:33 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:

	~Zombie();
	Zombie(void);
	void	announce(void);
	void	set_Name(std::string name);	

	private:

	std::string	name;	
};

#endif
