/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:40:06 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/29 11:48:36 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	public:

	WrongCat(void);
	WrongCat(const WrongCat& toCopy);
	virtual ~WrongCat(void);

	WrongCat& operator=(const WrongCat& toCopy);

	std::string getType(void) const;
	void	makeSound(void) const;

	private:

};

#endif
