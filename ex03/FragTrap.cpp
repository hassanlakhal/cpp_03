/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:50:54 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/26 00:29:48 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << " default Constructor FragTrap " << std::endl;
    this->name = name;
    this->hitPoint = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << " parametrize Constructor FragTrap " << std::endl;
    this->name = name;
    this->hitPoint = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
     std::cout << " called Destructor FragTrap " << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    this->name = other.name;
    this->hitPoint = other.hitPoint;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

FragTrap& FragTrap::operator= (const FragTrap& other)
{
     if (this == &other)
        return *this;    
    this->name = other.name;
    this->hitPoint = other.hitPoint;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return *this;
}
void FragTrap::highFivesGuys()
{
  std::cout << "FragTrap " << this->name << " requests a high five " << std::endl;
}