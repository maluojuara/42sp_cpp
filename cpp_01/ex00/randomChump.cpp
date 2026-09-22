/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 15:41:06 by malcosta          #+#    #+#             */
/*   Updated: 2026/09/19 18:28:45 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creating on stack - automatically destroyed
// Faster - only exists inside the function's scope
// Once the function ends, the zombie dies

void	randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
