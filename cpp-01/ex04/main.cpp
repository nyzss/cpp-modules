/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:18:35 by okoca             #+#    #+#             */
/*   Updated: 2024/07/23 08:16:53 by okoca            ###   ########.fr       */
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
		std::cerr << "Failure: infile: aborting..." << std::endl;
		return (1);
	}

	std::string outputFileName = av[1];
	outputFileName += ".replace";
	std::ofstream outputFile(outputFileName.c_str());
	if (!outputFile.is_open())
	{
		inputFile.close();
		std::cerr << "Failure: outfile: aborting..." << std::endl;
		return (1);
	}

	std::string	currentLine;
	std::string	newLine;
	size_t		occurences = 0;
	while (std::getline(inputFile, currentLine))
	{
		size_t index;
		newLine = currentLine;
		while (to_replace != "" && (index = newLine.find(to_replace)) != std::string::npos)
		{
			occurences++;
			newLine = newLine.substr(index + to_replace.size());
		}
		while ((to_replace != "" && (index = currentLine.find(to_replace)) != std::string::npos) && occurences)
		{
			newLine = currentLine.substr(0, index);
			newLine += with;
			newLine += currentLine.substr(index + to_replace.size());
			currentLine = newLine;
			occurences--;
		}
		outputFile << currentLine << std::endl;
	}
	inputFile.close();
	outputFile.close();
	return (0);
}