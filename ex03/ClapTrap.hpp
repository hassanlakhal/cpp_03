/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:21:24 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/26 18:54:11 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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
         ClapTrap(const std::string& str);
         ClapTrap& operator = (const ClapTrap &other);
         ClapTrap(const ClapTrap &other);
         ~ClapTrap();
         void attack(const std::string& target);
         void takeDamage(unsigned int amount);
         void beRepaired(unsigned int amount);
 };
 
#endif


