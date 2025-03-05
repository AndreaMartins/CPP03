/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:40:58 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/05 22:43:12 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_name = "No name";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDmg = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	_name = copy.getName();
	_hitPoints = copy.getHitPoints();
	_energyPoints = copy.getEnergyPoints();
	_attackDmg = copy.getAttackDamage();
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	if (this != &other)
	{
		_name = other.getName();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDmg = other.getAttackDamage();
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints < 1)
		std::cout << "ScavTrap " <<  _name << " can't attack, because they have no energy left." << std::endl;
	else if (_hitPoints < 1)
		std::cout << _name << " can't attack, because they have no hit points left." << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDmg << " damage." << std::endl;
		_energyPoints--;
		std::cout << "ScavTrap " <<  _name << " has " << _energyPoints << " energy points left." << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}


