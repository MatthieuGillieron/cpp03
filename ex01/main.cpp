/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:58:22 by mg                #+#    #+#             */
/*   Updated: 2025/11/08 16:19:48 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <string>


int main()
{
	
	ScavTrap a("Eric");
	ScavTrap c(a);
	ClapTrap b("Bob");

	std::cout << std::endl;
	
	std::cout << "[ScavTrap INFO]" << std::endl;
	std::cout << "Energy point: " << c.getEnergyPoint() << 
	"  |  HP: " << c.getHitPoint() << std::endl;

	std::cout << std::endl;

	std::cout << "[ClapTrap INFO]" << std::endl;
	std::cout << "Energy point: " << b.getEnergyPoint() << 
	"  |  HP: " << b.getHitPoint() << std::endl;
	
	std::cout << std::endl;


}