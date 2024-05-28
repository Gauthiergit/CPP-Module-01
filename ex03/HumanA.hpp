/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:53:49 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/28 20:53:49 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
    
    std::string name;
    Weapon		weapon;

    public:

    HumanA(std::string new_name, Weapon& new_weapon);
    ~HumanA();

    void    attack(void);
};

#endif