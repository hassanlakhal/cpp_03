/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:21:24 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/19 13:14:06 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class ClapTrap
{
   protected:
      std::string name;
      unsigned int hitPoint;
      unsigned int energyPoints;
      unsigned int attackDamage;
   public:
         ClapTrap();
         ClapTrap(std::string str);
         ClapTrap& operator = (ClapTrap &other);
         ClapTrap(ClapTrap &other);
         ~ClapTrap();
         void attack(const std::string& target);
         void takeDamage(unsigned int amount);
         void beRepaired(unsigned int amount);
 };


