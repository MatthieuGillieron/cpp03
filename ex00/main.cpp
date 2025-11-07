/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:58:22 by mg                #+#    #+#             */
/*   Updated: 2025/11/07 15:32:28 by mg               ###   ########.fr       */
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
	ClapTrap c(a);
	ClapTrap array[10];


	std::cout << "a: " << a.getName() << std::endl;
	std::cout << "c: " << a.getName() << std::endl;
	std::cout << "d: " << d.getName() << std::endl;

	a = b;

	std::cout << "a: " << a.getName() << std::endl;

}