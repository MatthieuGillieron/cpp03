
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

//	=== CONSTRUCTOR === 
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ClapTrap);
	ClapTrap& operator=(const ClapTrap&);
	~ClapTrap();

//	=== GETTER ===
	std::string getName() const;
	int getHitPoint() const;
	int getEnergyPoint() const;
	int getAttackDamage() const;

// === METHODE ===	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	

};



#endif