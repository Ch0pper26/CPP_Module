/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:05:22 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/17 17:05:00 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:

	Harl();
	~Harl();

	void	complain(std::string level);

	private:

	void	info(void);
	void	error(void);
	void	debug(void);
	void	warning(void);
};

#endif
