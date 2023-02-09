/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:16:53 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/10 11:51:10 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

typedef struct s_Data
{
	int	test;
}	Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
