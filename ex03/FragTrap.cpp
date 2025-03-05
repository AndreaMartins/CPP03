/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:53:59 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/05 22:57:35 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_name = "No name";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDmg = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDmg = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	_name = copy.getName();
	_hitPoints = copy.getHitPoints();
	_energyPoints = copy.getEnergyPoints();
	_attackDmg = copy.getAttackDamage();
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	if (this != &other)
	{
		_name = other.getName();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDmg = other.getAttackDamage();
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " wants to request a positive highfive." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}