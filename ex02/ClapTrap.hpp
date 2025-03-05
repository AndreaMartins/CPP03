/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:40:45 by andmart2          #+#    #+#             */
/*   Updated: 2025/03/05 22:41:48 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDmg;

	public:
		/*	DEFAULT CONSTRUCTOR	*/
		ClapTrap();
		ClapTrap(std::string name);

		/*	COPY CONSTRUCTOR	*/
		ClapTrap(const ClapTrap &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		ClapTrap& operator=(const ClapTrap &other);
		
		/*	GETTERS AND SETTERS	*/
		std::string getName(void) const;
		int getHitPoints(void) const;
		int getEnergyPoints(void) const;
		int getAttackDamage(void) const;
		void setName(std::string name);
		void setHitPoints(unsigned int amount);
		void setEnergyPoints(unsigned int amount);
		void setAttackDmg(unsigned int amount);
		
		/*	MEMBER FUNCTIONS	*/
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		/*	DESTRUCTOR	*/
		~ClapTrap();	
};

#endif