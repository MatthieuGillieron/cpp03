/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:58:22 by mg                #+#    #+#             */
/*   Updated: 2025/11/08 17:08:06 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <string>


int main()
{
	
	ScavTrap a("Eric");
	
	std::cout << std::endl;
	
	std::cout << "[ScavTrap INFO]" << std::endl;
	std::cout << "Energy point: " << a.getEnergyPoint() << 
	"  |  HP: " << a.getHitPoint() << std::endl;

	std::cout << std::endl;

	a.attack("Yoda");
	a.takeDamage(30);

	std::cout << std::endl;
	
	std::cout << "[ScavTrap INFO]" << std::endl;
	std::cout << "Energy point: " << a.getEnergyPoint() << 
	"  |  HP: " << a.getHitPoint() << std::endl;

	a.beRepaired(20);
	a.guardGate();
	
	std::cout << std::endl;


}