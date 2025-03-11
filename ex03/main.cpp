/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:54:07 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/11 14:41:56 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    ClapTrap clap("RX-9000");
    clap.attack("AA-1000");
    clap.takeDamage(5);
    clap.beRepaired(4);
    
    std::cout << std::endl;

    ScavTrap scav("RX-9001");
    scav.attack("AA-1001");
    scav.takeDamage(20);
    scav.beRepaired(4);
    scav.guardGate();

    std::cout << std::endl;

    FragTrap frag("RX-9002");
    frag.attack("AA-1002");
    frag.takeDamage(30);
    frag.beRepaired(4);
    frag.highFivesGuys();

    std::cout << std::endl;

    DiamondTrap diamond1("RX-9003");
    DiamondTrap defaultDiamond;
    DiamondTrap copyDiamond(diamond1);
    DiamondTrap assignedDiamond = diamond1;

    diamond1.attack("AA-1003");
    diamond1.takeDamage(40);
    diamond1.beRepaired(4);
    diamond1.whoAmI();

    std::cout << std::endl;
    
    return 0;
}
