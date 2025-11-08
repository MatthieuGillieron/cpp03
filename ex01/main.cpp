/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:58:22 by mg                #+#    #+#             */
/*   Updated: 2025/11/08 16:00:52 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <string>


int main()
{
	ScavTrap a("Eric");
	std::cout << "Valeur de Eric[ScavTrap]: " << a.getEnergyPoint() << std::endl;
}