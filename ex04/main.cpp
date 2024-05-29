/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:20:03 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/29 15:29:37 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Use: ./replace <infile.txt> <string to replace> <replacement string>" << std::endl;
		return (1);
	}
	
	std::string new_string;
	std::string to_find;
	std::string to_replace;

	std::string infile_name = argv[1];
	std::ifstream infile(infile_name.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error to open infile" << std::endl;
		return (1);
	}

	std::string outfile_name = "outfile.txt";
	std::ofstream outfile(outfile_name.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error to open outfile" << std::endl;
		return (1);
	}
	
	to_find = argv[2];
	to_replace = argv[3];

	std::string line;
	while (std::getline(infile, line))
	{
		
	}
}