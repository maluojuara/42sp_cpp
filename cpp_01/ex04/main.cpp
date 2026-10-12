/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:45:31 by malcosta          #+#    #+#             */
/*   Updated: 2026/09/23 15:10:43 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>


std::string ft_replace(std::string word, std::string s1, std::string s2)
{
	if (s1.empty())
		return (word);
	size_t pos = 0;
	
	while ((pos = word.find(s1, pos)) != std::string::npos)
	{
		word.erase(pos, s1.length());
		word.insert(pos, s2);
		pos += s2.length();
	}
	return (word);
}

int	main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Incorrect use. Usage: ./sed <filename> <string 1> <string 2>" << std::endl;
		return (1);
	}

	if (av[2][0] == '\0')
	{
		std::cout << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}

	std::string filename = av[1];
	std::string str1 = av[2];
	std::string str2 = av[3];

	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}

	std::ofstream outputFile((filename + ".replace").c_str());
	if (!outputFile.is_open())
	{
		std::cout << "Error: could not create output file." << std::endl;
		return (1);
	}
	
	std::stringstream buffer;
	buffer << inputFile.rdbuf();
	std::string content = buffer.str();

	std::string result = ft_replace(content, str1, str2);
	outputFile << result;

	return (0);
}
