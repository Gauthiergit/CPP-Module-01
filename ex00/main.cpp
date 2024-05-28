/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:12:44 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/28 15:08:09 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie* first_zombie = newZombie("Patrick");
	first_zombie->announce();
	delete first_zombie;

	randomChump("Michel");
	return (0);
}