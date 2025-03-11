/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:23:51 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 14:33:16 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ClapTrap clap1("RX-9000");
    ClapTrap clap2("AA-1000");
    ClapTrap defaultClap;
    ClapTrap copyClap(clap1);
    ClapTrap assignedClap = clap2;
    
    std::cout << std::endl;
    
    clap1.attack("AA-1000");
    clap2.takeDamage(5);
    
    clap2.attack("RX-9000");
    clap1.takeDamage(3);

    clap1.beRepaired(4);
    clap2.beRepaired(2);

    for (int i = 0; i < 12; i++) {
        clap1.attack("AA-1000");
    }
    clap2.takeDamage(20);
    clap2.takeDamage(11);
    
    clap1.beRepaired(10);
    clap2.beRepaired(10);
    clap2.attack("RX-9000");

    std::cout << std::endl;

    ScavTrap scav1("RX-9001");
    ScavTrap scav2("AA-1001");
    ScavTrap defaultScav;
    ScavTrap copyScav(scav1);
    ScavTrap assignedScav = scav2;
    
    std::cout << std::endl;
    
    scav1.attack("AA-1001");
    scav2.takeDamage(20);
    
    scav2.attack("RX-9001");
    scav1.takeDamage(20);

    scav1.beRepaired(4);
    scav2.beRepaired(2);

    scav1.guardGate();

    for (int i = 0; i < 52; i++) {
        scav1.attack("AA-1001");
    }
    scav2.takeDamage(50);
    scav2.takeDamage(600);
    
    scav1.beRepaired(10);
    scav2.beRepaired(10);
    scav2.attack("RX-9001");
    scav2.guardGate();

    std::cout << std::endl;

    return 0;
}
