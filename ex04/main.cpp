/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:20:03 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/30 11:37:07 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Use: ./replace <infile.txt> <string to find> <string to replace>" << std::endl;
		return (1);
	}
	
	std::string infile_name = argv[1];
	std::ifstream infile(infile_name.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error to open infile" << std::endl;
		return (1);
	}

	std::string outfile_name = "file.replace";
	std::ofstream outfile(outfile_name.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error to open outfile" << std::endl;
		return (1);
	}
	
	std::string to_find = argv[2];
	std::string to_replace = argv[3];
	std::string new_string;
	std::size_t pos;
    std::size_t prev_pos;
	std::string line;
	while (std::getline(infile, line))
	{
		pos = 0;
		prev_pos = 0;
		new_string = "";
		if ((pos = line.find(to_find, pos)) != std::string::npos)
		{
			while ((pos = line.find(to_find, pos)) != std::string::npos)
			{
				new_string.append(line, prev_pos, pos - prev_pos);
				new_string.append(to_replace);
				pos += to_find.length();
				prev_pos = pos;
			}
			if (pos < line.length())
				new_string.append(line, prev_pos, line.length() - prev_pos);
			outfile << new_string << std::endl;
		}
		else
			outfile << line << std::endl;
	}

	infile.close();
	outfile.close();
	return (0);
}