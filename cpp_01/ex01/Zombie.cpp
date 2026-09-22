/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:44:29 by malcosta          #+#    #+#             */
/*   Updated: 2026/09/22 15:58:27 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie ()
{
	std::cout << "Unnamed zombie has been created." << std::endl;
}

Zombie::Zombie (std::string name)
{
	this->name = name;
	std::cout << "Zombie " << name << " has been created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " has been destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}