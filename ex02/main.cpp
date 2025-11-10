/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:58:22 by mg                #+#    #+#             */
/*   Updated: 2025/11/10 12:54:03 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>


int main()
{
	
    std::cout << "\n=== 🧱 Création des FragTrap ===" << std::endl;
    FragTrap slim("Slim");
    FragTrap shady("Shady");

    std::cout << "\n=== ⚔️ Test des attaques ===" << std::endl;
    slim.attack("Yoda");
    shady.attack("Vador");

    std::cout << "\n=== 💥 Test des dégâts et réparation ===" << std::endl;
    slim.takeDamage(30);
    slim.beRepaired(15);

    std::cout << "\n=== 🙌 Test de la fonction spéciale ===" << std::endl;
    slim.highFivesGuys();

    std::cout << "\n=== 🧩 Test du constructeur de copie ===" << std::endl;
    FragTrap copie(slim);

    std::cout << "\n=== 🔁 Test de l’opérateur d’affectation ===" << std::endl;
    shady = slim;

    std::cout << "\n=== Fin du programme ===" << std::endl;
    return 0;
}

