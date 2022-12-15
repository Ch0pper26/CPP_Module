/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:31:48 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/29 12:03:12 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& toCopy);
	virtual ~WrongAnimal(void);

	WrongAnimal& operator=(const WrongAnimal& toCopy);

	std::string	getType(void) const;
	void	makeSound(void) const;
	
	protected:

	std::string type;

};

#endif
