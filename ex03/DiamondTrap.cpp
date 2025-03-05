/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:53:52 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/05 22:56:48 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
	DiamondTrap::setName("Noname");
	_hitPoints = 100;
	_attackDmg = 30;
	_energyPoints = 50;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
	DiamondTrap::setName(name);
	_hitPoints = 100;
	_attackDmg = 30;
	_energyPoints = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy assignment operator called." << std::endl;
	if (this != &other)
	{
		DiamondTrap::setName(other.getName());
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDmg = other.getAttackDamage();
	}
	return (*this);
}

void DiamondTrap::setName(const std::string name)
{
	DiamondTrap::_name = name;
	ClapTrap::setName(_name + "_clap_name");
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My own name is: " << _name << ", my ClapTrap's name is: " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}