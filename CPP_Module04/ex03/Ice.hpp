/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:12:40 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/05 11:52:34 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
	public:

	Ice(void);
	Ice(const Ice& toCopy);
	~Ice(void);

	Ice&	operator=(const Ice& toCopy);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

	private:

};

#endif
