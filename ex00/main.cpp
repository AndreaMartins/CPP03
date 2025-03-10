/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:38:28 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/05 20:40:35 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap mario("Mario");
	ClapTrap luigi;
	ClapTrap wario = luigi;

	luigi.setName("Luigi");
	wario.setName("Wario");
	mario.setAttackDmg(5);
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	luigi.beRepaired(4);
	luigi.setAttackDmg(7);
	luigi.attack(mario.getName());
	mario.takeDamage(luigi.getAttackDamage());
	mario.setAttackDmg(5);
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	mario.attack(luigi.getName());
	return (0);
}