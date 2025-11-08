/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:58:22 by mg                #+#    #+#             */
/*   Updated: 2025/11/08 14:44:09 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>


int main()
{
	ClapTrap a("Eric");

	std::cout << std::endl;
	std::cout << "Info Eric: " << std::endl;
	std::cout << "Energy: " << a.getEnergyPoint() << "   HP: " << a.getHitPoint() << "\n"<<std::endl;



	a.attack("Bobs");
	a.takeDamage(8);
	std::cout << std::endl;

	std::cout << "Info Eric: " << std::endl;
	std::cout << "Energy: " << a.getEnergyPoint() << "   HP: " << a.getHitPoint() << "\n"<<std::endl;

	a.beRepaired(4);
	std::cout << "Health point left:" << a.getHitPoint() << std::endl;
	std::cout << std::endl;

}