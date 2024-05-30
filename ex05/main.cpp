/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:08:45 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/30 15:00:16 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Use: ./harl DEBUG" << std::endl
			<< "ou ./harl INFO" << std::endl
			<< "ou ./harl WARNING" << std::endl
			<< "ou ./harl ERROR" << std::endl;
		return (1);
	}

	Harl harl;
	harl.complain(argv[1]);
	return (0);
}