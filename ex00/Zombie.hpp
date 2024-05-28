/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:13:04 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/28 14:54:59 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
	
	std::string name;

	public:

	Zombie();
	Zombie(std::string new_name);
	~Zombie();

	void	announce(void);
	void	setName(std::string new_name);
};

Zombie*	newZombie(std::string name);
void	randomChump( std::string name );

#endif