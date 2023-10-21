/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:40:50 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/21 19:48:07 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
    hitPoint = FragTrap::hitPoint;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    name = ClapTrap::name + "_clap_name";
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
}