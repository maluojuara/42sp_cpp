/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 15:40:37 by malcosta          #+#    #+#             */
/*   Updated: 2026/09/19 18:34:31 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// New - allocates necessary memory at heap (pointer)
// The function ends, but the zombie remains alive
// Slower and need to free (with delete) - memory leak

Zombie*	newZombie(std::string name)
{
	Zombie *newZombie;
	
	newZombie = new Zombie(name);
	return (newZombie);
}
