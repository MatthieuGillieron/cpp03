/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:07:38 by mg                #+#    #+#             */
/*   Updated: 2025/11/10 11:35:58 by mg               ###   ########.fr       */
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
