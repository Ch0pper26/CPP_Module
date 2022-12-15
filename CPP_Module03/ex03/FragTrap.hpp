/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:30:18 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/26 17:21:33 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap
{
	public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& toCopy);
	~FragTrap(void);

	FragTrap& operator=(const FragTrap& toCopy);

	void	highFivesGuys(void);

	private:

};

#endif
