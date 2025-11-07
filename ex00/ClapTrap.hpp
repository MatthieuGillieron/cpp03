
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{

	private:

		std::string _name;
		int	_hitPoint;
		int _energyPoint;
		int _attackDamage; 

	public:

	//TODO:
	//	[1] Construtor : assign

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ClapTrap);
	ClapTrap& operator=(const ClapTrap&);
	~ClapTrap();

	
	std::string getName() const;
	int getHitPoint() const;
	int getEnergyPoint() const;
	int getAttackDamage() const;

};



#endif