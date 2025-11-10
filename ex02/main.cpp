/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:58:22 by mg                #+#    #+#             */
/*   Updated: 2025/11/10 11:35:14 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>


int main()
{
	
	FragTrap a("Eric");
	FragTrap b("jon");
	FragTrap c(a);


	
	std::cout << std::endl;
	std::cout << "a: " << a.getName() << std::endl;
	std::cout << "b: " << b.getName() << std::endl;
	std::cout << "c: " << c.getName() << std::endl;

	a = b;
	std::cout << "a: " << a.getName() << std::endl;

	

	
	// std::cout << "[ScavTrap INFO]" << std::endl;
	// std::cout << "Energy point: " << a.getEnergyPoint() << 
	// "  |  HP: " << a.getHitPoint() << std::endl;

	std::cout << std::endl;

	a.attack("Yoda");
	a.takeDamage(30);

	std::cout << std::endl;
	
	// std::cout << "[ScavTrap INFO]" << std::endl;
	// std::cout << "Energy point: " << a.getEnergyPoint() << 
	// "  |  HP: " << a.getHitPoint() << std::endl;

	
	
	std::cout << std::endl;


}