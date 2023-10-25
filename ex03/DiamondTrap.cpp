/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:40:50 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/24 22:44:50 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "default construct DiamondTrap" << std::endl;
    this->hitPoint = FragTrap::hitPoint;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    this->name   = ClapTrap::name + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string name):name(name)
{
    std::cout << " parametrize construct DiamondTrap" << std::endl;
    this->hitPoint = FragTrap::hitPoint;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    ClapTrap::name = this->name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    this->name = other.name;
    this->hitPoint = other.hitPoint;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this == &other)
        return *this;    
    this->name = other.name;
    this->hitPoint = other.hitPoint;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return *this;
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "called Destructor DiamondTrap" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout <<  name <<  " name ClapTrap is " << ClapTrap::getName() << std::endl; 
}