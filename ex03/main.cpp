/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:01:08 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/29 11:02:52 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("sword");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("axe");
		bob.attack();
	}
	{
		Weapon club = Weapon("knife");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		// club.setType("baseball bat");
		jim.attack();
	}
	return 0;
}