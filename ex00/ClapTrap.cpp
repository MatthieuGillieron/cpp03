/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:59:53 by mg                #+#    #+#             */
/*   Updated: 2025/11/07 16:09:49 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>


ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap() : _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& val)
{
	_name = val._name;
	_hitPoint = val._hitPoint;
	_energyPoint = val._energyPoint;
	_attackDamage = val._attackDamage;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{

		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
		return *this;
}



std::string ClapTrap::getName() const { return _name; }
int ClapTrap::getHitPoint() const { return _hitPoint; }
int ClapTrap::getEnergyPoint() const { return _energyPoint; }
int ClapTrap::getAttackDamage() const { return _attackDamage; }