/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:38:08 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/05 20:38:56 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("No name"), _hitPoints(10), _energyPoints(10), _attackDmg(0)
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDmg(0)
{
	std::cout << "Name constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	_name = copy.getName();
	_hitPoints = copy.getHitPoints();
	_energyPoints = copy.getEnergyPoints();
	_attackDmg = copy.getAttackDamage();
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &other)
	{
		_name = other.getName();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDmg = other.getAttackDamage();
	}
	return (*this);
}

/*	GETTERS AND SETTERS	*/
std::string ClapTrap::getName(void) const
{
	return (_name);
}

int ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (_energyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
	return (_attackDmg);
}

void ClapTrap::setName(std::string name)
{
	_name = name;
	std::cout << "Name set to " << _name << "." << std::endl;
}

void ClapTrap::setHitPoints(unsigned int amount)
{
	_hitPoints = amount;
	std::cout << "Hit points are now: " << _hitPoints << "." << std::endl;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
	_energyPoints = amount;
	std::cout << "ClapTrap " << _name << " got more energy. They have " << _energyPoints << " energy points now." << std::endl;
}

void ClapTrap::setAttackDmg(unsigned int amount)
{
	_attackDmg = amount;
	std::cout << "ClapTrap " << _name << " got more damage. They have " << _attackDmg << " attack damage points now." << std::endl;
}

/*	MEMBER FUNCTIONS	*/
void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints < 1)
		std::cout << "ClapTrap " <<  _name << " can't attack, because they have no energy left." << std::endl;
	else if (_hitPoints < 1)
		std::cout << _name << " can't attack, because they have no hit points left." << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDmg << " damage." << std::endl;
		_energyPoints--;
		std::cout << "ClapTrap " <<  _name << " has " << _energyPoints << " energy points left." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " <<  _name << " took " << amount << " damage." << std::endl;
		_hitPoints -= amount;
		if (_hitPoints < 0)
			_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hit points left." << std::endl;
	}
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints < 1)
		std::cout << "ClapTrap " << _name << " has no energy points left." << std::endl;
	else if (_hitPoints < 1)
		std::cout << _name << " can't attack, because they have no hit points left." << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " healed " << amount << " of hit points." << std::endl;
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " now has " << _hitPoints << " hit points left and " << _energyPoints << " energy points left." << std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
}