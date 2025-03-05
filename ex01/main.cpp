/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:23:51 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/05 22:24:08 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap mario("Mario");
	ScavTrap luigi("Wrong name");

	luigi.setName("Luigi");
	mario.setAttackDmg(5);
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	luigi.beRepaired(4);
	luigi.setAttackDmg(7);
	luigi.attack(mario.getName());

	luigi.guardGate();

	return (0);
}