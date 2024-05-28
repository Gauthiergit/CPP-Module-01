/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:17:49 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/28 17:05:04 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
	
	std::string name;

	public:

	Zombie();
	Zombie(std::string new_name);
	~Zombie();

	void	announce(void);

};

Zombie* zombieHorde( int N, std::string name );

#endif