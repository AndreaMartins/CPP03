/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:54:15 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 14:42:18 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap") {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " has been created. (default constructor)" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap) {
    std::cout << "ScavTrap " << _name << " has been copied." << std::endl;  
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap) {
    if (this != &scavTrap) {
        ClapTrap::operator=(scavTrap);
    }
    std::cout << "ScavTrap " << _name << " has been assigned." << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " has been destroyed." << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " ferociously attacks " << target 
        << ", dealing " << _attackDamage << " damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " has no energy or is already down!" << std::endl;
    }   
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!" << std::endl;
}
