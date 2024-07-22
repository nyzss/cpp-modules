/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:18:35 by okoca             #+#    #+#             */
/*   Updated: 2024/07/22 20:34:46 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Filename, text to replace, substitute" << std::endl;
		return (1);
	}
	std::string	to_replace = av[2];
	std::string	with = av[3];
	std::ifstream inputFile(av[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "File not found!, exiting..." << std::endl;
		return (1);
	}

	std::string outputFileName = av[1];
	outputFileName += ".replace";
	std::ofstream outputFile(outputFileName.c_str());
	if (!outputFile.is_open())
	{
		inputFile.close();
		std::cerr << "Failure to create fail, aborting..." << std::endl;
		return (1);
	}

	std::string	currentLine;
	std::string	newLine;
	while (std::getline(inputFile, currentLine))
	{
		size_t index;
		while ((index = currentLine.find(to_replace)) != std::string::npos)
		{
			newLine = currentLine.substr(0, index);
			newLine += with;
			newLine += currentLine.substr(index + to_replace.size());
			currentLine = newLine;
		}
		outputFile << currentLine << std::endl;
	}
	inputFile.close();
	outputFile.close();
	return (0);
}