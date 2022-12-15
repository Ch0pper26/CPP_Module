/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:41:45 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/05 10:48:49 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
	public:

	Cure(void);
	Cure(const Cure& toCopy);
	~Cure(void);

	Cure&	operator=(const Cure& toCopy);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

	private:

};

#endif
