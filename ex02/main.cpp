/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:44:03 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/05 22:44:18 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap wario;
	FragTrap mario("Mario");
	ScavTrap luigi("No name");

	wario.setName("Wario");
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
	mario.highFivesGuys();

	return (0);
}