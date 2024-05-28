/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 22:36:41 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/28 22:36:41 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
	
	std::string	name;
	Weapon*		weapon;

	public:

	HumanB(std::string new_name);
	~HumanB();

	void	attack(void);
	void	setWeapon(Weapon& new_weapon);

};

#endif