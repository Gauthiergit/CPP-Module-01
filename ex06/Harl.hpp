/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:52:04 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/30 16:06:27 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Harl
{
	private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	public:

	Harl();
	~Harl();

	void complain(std::string level);
};
#endif