/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:28:06 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/30 17:34:51 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("") {}

Zombie::Zombie(std::string new_name) : name(new_name) {}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string new_name)
{
	name = new_name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie: " << name << " destroyed" << std::endl;
	return ;
}
