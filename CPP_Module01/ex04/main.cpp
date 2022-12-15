/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:15:52 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/18 13:19:01 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	check_arg(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error\nToo few/many argument" << std::endl;
		return (1);
	}
	if (argv[1][0] == '\0' || argv[2][0] == '\0')
	{
		std::cout << "Error\nOne argument is empty" << std::endl;
		return (1);
	}
	return (0);
}

std::string	recup_file(std::istream &file)
{
	std::string content;
	std::string	line;

	while (getline(file, line))
		content += line + '\n';
	return (content);
}

std::string	replace_occurrence(std::string content, std::string s1, std::string s2)
{
	int	j = 0;
	int	i = content.find(s1);
	std::string r_content;

	while (i != -1)
	{
		r_content += content.substr(j, i - j);
		r_content += s2;
		i += s1.size();
		j = i;
		i = content.find(s1, i);
	}
	r_content += content.substr(j, content.size() - j);
	return(r_content);
}

void	copy_content(std::string file_name, std::string content)
{
	file_name += ".replace";
	std::ofstream outfile(file_name.c_str());
	if (!outfile)
	{
		std::cout << "Error\nCan't open file.replace" << std::endl;
		return ;
	}
	outfile << content;
}

int	main(int argc, char **argv)
{
	std::string	content;

	if (check_arg(argc, argv))
		return (1);
	std::ifstream file(argv[1]);
	if (!file)
	{
		std::cout << "Error\nCan't open file" << std::endl;
		return (1);
	}
	content = recup_file(file);
	content = replace_occurrence(content, argv[2], argv[3]);
	copy_content(argv[1], content);
	return (0);
}
