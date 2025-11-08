
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"





// TODO :
//
//		[1] -> Heritage de class Claptrap
// 		[2] -> default, 
//		[3] -> 


class ScavTrap : public ClapTrap
{

	private:
	
	
	
	
	public:

	~ScavTrap();
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& ScavTrap);
	ScavTrap& operator=(const ScavTrap&);


};


#endif