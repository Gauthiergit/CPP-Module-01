/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:12:59 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/28 14:55:08 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : name("") {}

Zombie::Zombie(std::string new_name) : name(new_name) {}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string new_name)
{
	name = new_name;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie: " << name << " destroyed" << std::endl;
	return ;
}