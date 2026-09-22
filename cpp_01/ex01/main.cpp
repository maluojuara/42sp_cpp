/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:44:16 by malcosta          #+#    #+#             */
/*   Updated: 2026/09/22 16:03:32 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	Zombie* horde = zombieHorde(5, "Jurandir");
	if (!horde)
		return (1);

	for (int i = 0; i < 5; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}
