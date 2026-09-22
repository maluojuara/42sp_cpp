/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 15:02:04 by malcosta          #+#    #+#             */
/*   Updated: 2026/09/22 15:37:51 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main (void)
{
	std::cout << "Testing new zombie - allocating memory at heap: " << std::endl;
	Zombie *testZombie = newZombie("test");
	testZombie->announce();
	delete testZombie;

	std::cout << "\n\n";
	std::cout << "Testing random chump - allocating memory at stack: " << std::endl;
	randomChump("random");
	return (0);
}
