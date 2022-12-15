/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:04:18 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/15 16:47:53 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string &stringREF(brain);

	std::cout << "string memory adress : " <<&brain << std::endl;
	std::cout << "stringPTR memory adress : " << stringPTR << std::endl;
	std::cout << "stringREF memory adress : " << &stringREF << std::endl;

	std::cout << "string value : " << brain << std::endl;
	std::cout << "stringPTR value : " << *stringPTR << std::endl;
	std::cout << "stringREF value : " << stringREF << std::endl;
	return (0);
}
