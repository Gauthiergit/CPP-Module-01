/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:53:51 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/28 21:53:51 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Weapon::Weapon(void) : typer("") {}

Weapon::Weapon(std::string new_type) : type(new_type) {}

std::string const	&Weapon::getType(void)
{
    return (type);
}

void    Weapon::setType(std::string newType)
{
    type = newType;
    return ;
}

Weapon::~Weapon(void)
{
    std::cout << type << " dropped" << std::endl;
    return ;
}