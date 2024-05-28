/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:11:58 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/28 20:11:58 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
    private:

    std::string type;


    public:

    // Weapon(void);
    Weapon(std::string new_type);
    ~Weapon();

    std::string const	&getType(void);
    void          setType(std::string newType);
};

#endif