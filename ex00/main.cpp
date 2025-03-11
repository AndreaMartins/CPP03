/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:38:28 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 14:29:50 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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

    return 0;
}
