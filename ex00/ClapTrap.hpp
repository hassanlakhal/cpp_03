/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:21:24 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/31 17:46:43 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class ClapTrap
{
   private:
      std::string name;
      unsigned int hitPoint;
      unsigned int energyPoints;
      unsigned int attackDamage;
   public:
         ClapTrap();
         ClapTrap(const std::string& str);
         ClapTrap& operator = (ClapTrap &other);
         ClapTrap(const ClapTrap &other);
         ~ClapTrap();
         void attack(const std::string& target);
         void takeDamage(unsigned int amount);
         void beRepaired(unsigned int amount);
 };


