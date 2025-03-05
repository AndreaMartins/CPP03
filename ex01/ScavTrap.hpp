/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:20:00 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/05 22:22:32 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);

		ScavTrap(const ScavTrap &copy);
		ScavTrap& operator=(const ScavTrap &other);

		void attack(const std::string& target);
		void guardGate();
		
		~ScavTrap();
};


#endif