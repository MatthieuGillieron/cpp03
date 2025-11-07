/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:58:22 by mg                #+#    #+#             */
/*   Updated: 2025/11/07 17:30:23 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <vector>


int main()
{
	ClapTrap d;
	ClapTrap a("Eric");
	ClapTrap b("Boby");
	
std::cout <<"a energy: " << a.getEnergyPoint() << std::endl;
	a.attack("pluto");
	std::cout <<"a energy: " << a.getEnergyPoint() << std::endl;

	a.takeDamage(8);
	a.beRepaired(4);
	std::cout << a.getHitPoint() << std::endl;
}