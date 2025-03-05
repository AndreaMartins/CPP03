/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:54:07 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/05 22:58:01 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap mario("Mario");
	ScavTrap luigi("Wrong name");
	FragTrap wario("WARIO");
	DiamondTrap waluigi;

	luigi.setName("Luigi");
	mario.setAttackDmg(5);
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	luigi.beRepaired(4);
	luigi.setAttackDmg(7);
	luigi.attack(mario.getName());
	mario.takeDamage(luigi.getAttackDamage());
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());

	luigi.guardGate();
	wario.highFivesGuys();
	waluigi.whoAmI();
	waluigi.setName("Waluigi");
	waluigi.whoAmI();
	return (0);
}