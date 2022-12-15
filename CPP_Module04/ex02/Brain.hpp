/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:07:49 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/29 12:33:53 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:

	Brain(void);
	Brain(const Brain& toCopy);
	~Brain(void);

	Brain& operator=(const Brain& toCopy);

	private:

	std::string ideas[100];
};

#endif
