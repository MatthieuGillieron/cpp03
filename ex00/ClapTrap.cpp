/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:59:53 by mg                #+#    #+#             */
/*   Updated: 2025/11/08 14:03:45 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

// === CONSTRUCTOR === 
ClapTrap::~ClapTrap() {	std::cout << "Destructor called" << std::endl;}

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


// === GETTER ===
std::string ClapTrap::getName() const { return _name; }
int ClapTrap::getHitPoint() const { return _hitPoint; }
int ClapTrap::getEnergyPoint() const { return _energyPoint; }
int ClapTrap::getAttackDamage() const { return _attackDamage; }


// === METHODE ===
void ClapTrap::attack(const std::string& target)
{
	if (_energyPoint > 0 && _hitPoint > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
		<< " , causing " << _attackDamage << " points of damage!" << std::endl;

		_energyPoint -= 1;
	}
	else
		std::cout << "ClapTrap " << _name << " is too tired or dead to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint <= 0)
		std::cout << "he's died, u can't take more damage" << std::endl;
	_hitPoint -= amount;

	std::cout << "CLapTrap " << _name << " take " << amount<< " damage"<<  std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoint > 10)
		std::cout << "U can't add health point u are full life" << std::endl;
	
	else
	{
		_hitPoint += amount;
		std::cout << "You add " << amount << " health point" << std::endl;	
	}

}