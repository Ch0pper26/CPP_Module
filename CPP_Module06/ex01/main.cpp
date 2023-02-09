/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:11:39 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/10 11:39:07 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	uintptr_t	tmp;
	Data	*ptr;

	ptr = new Data;
	ptr->test = 42;

	std::cout << "Before serialization : adress = " << ptr << " value = "
		<< ptr->test << std::endl;

	tmp = serialize(ptr);
	ptr = deserialize(tmp);

	std::cout << "After serialization : adress = " << ptr << " value = "
		<< ptr->test << std::endl;

	delete ptr; 
}
