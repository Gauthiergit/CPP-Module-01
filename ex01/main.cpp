/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:00:16 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/28 17:16:35 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int zombie_nb = 20;
	Zombie* horde = zombieHorde(zombie_nb, "Pierre");

	for (int i = 0; i < zombie_nb; i++)
	{
		std::cout << i + 1 << " ";
		horde[i].announce();
	}

	delete[] horde;
	
	return (0);
}