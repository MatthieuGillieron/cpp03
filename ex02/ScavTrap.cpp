/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:41:24 by mg                #+#    #+#             */
/*   Updated: 2025/11/10 11:00:07 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

// === CONSTRUCTOR / DESTRUCTOR ===

ScavTrap::~ScavTrap() {std::cout << "Destructor called" << std:: endl;}

ScavTrap::ScavTrap() : ClapTrap()
{
	_name = "default";
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

ScavTrap::ScavTrap(const ScavTrap& val) : ClapTrap(val)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "ScavTrap assignation operator called" << std::endl;
	}
	return *this;
}


void ScavTrap::attack(const std::string& target)
{
	if (_energyPoint < 1 || _hitPoint < 0)
		std::cout << "You can't attack" << std::endl;
	
	_energyPoint--;
	std::cout << "ScavTrap " << _name << " attack " << target <<
	",causing " << _attackDamage << " point of damage !" << std::endl; 
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap" << _name << " is now in Gate keeper mode." << std::endl;
}

