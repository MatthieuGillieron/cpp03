/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:07:38 by mg                #+#    #+#             */
/*   Updated: 2025/11/10 12:54:36 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::~FragTrap() {std::cout << "Destrucotr FragTrap called" << std::endl;}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "Constructor name FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& val) : ClapTrap(val)
{
	std::cout << "Constroctor copy FragTrap called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "Operator assignantion FragTrap called " << std::endl;
	}
	return *this;
}


// TODO :

// implementer Attack
// implement high5 -> juste un print

void FragTrap::attack(const std::string& target)
{
	if (_hitPoint < 1  || _energyPoint < 1)
		std::cout << "You can't atttack .." << std::endl;
	else
	{
		_energyPoint--;
		std::cout << "FragTrap " << _name << " attack " << target <<
		" causing " << _attackDamage << " point of damage" << std::endl; 
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap" << _name << "request a high five !" << std::endl; 
}
