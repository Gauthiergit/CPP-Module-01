/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:24:05 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/28 21:24:05 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string new_name) :
	name(new_name),
	weapon(NULL) {}

void HumanB::attack(void)
{
	if (weapon != NULL)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with his bare hands" << std::endl;
}

void	HumanB::setWeapon(Weapon& new_weapon)
{
	weapon = &new_weapon;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << name << " loses his strength..." << std::endl;
	return ;
}