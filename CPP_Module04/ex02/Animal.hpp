/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:43:41 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/30 11:03:18 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:

	Animal(void);
	Animal(const Animal& toCopy);
	virtual ~Animal(void);

	 Animal& operator=(const Animal& toCopy);

	std::string	getType(void) const;
	virtual void	makeSound(void) const = 0;
	
	protected:

	std::string type;

};

#endif
