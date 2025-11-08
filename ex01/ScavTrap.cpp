/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:41:24 by mg                #+#    #+#             */
/*   Updated: 2025/11/08 15:56:03 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

// === CONSTRUCTOR / DESTRUCTOR ===

ScavTrap::~ScavTrap() {std::cout << "Destructor called" << std:: endl;}

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap name constructor called" << std::endl;
}