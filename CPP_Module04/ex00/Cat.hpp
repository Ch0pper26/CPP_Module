/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:29:59 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/29 18:14:38 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
	public:

	Cat(void);
	Cat(const Cat& toCopy);
	virtual ~Cat(void);

	Cat& operator=(const Cat& toCopy);

	virtual void	makeSound(void) const;

	private:

};

#endif
