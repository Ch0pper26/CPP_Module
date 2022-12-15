/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:29:59 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/29 18:14:47 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
	public:

	Dog(void);
	Dog(const Dog& toCopy);
	virtual ~Dog(void);

	Dog& operator=(const Dog& toCopy);

	void	makeSound(void) const;

	private:

};

#endif
