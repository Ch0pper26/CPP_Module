/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:01:01 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/17 17:07:59 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	harl;

	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("DEBUG");
	harl.complain("ERROR");
	return (0);
}
