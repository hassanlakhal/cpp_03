/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:03:44 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/21 19:50:35 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << " default Constructor ScavTrap " << std::endl;
    this->hitPoint = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string str)
{
    std::cout << " parametrize Constructor ScavTrap " << std::endl;
    this->name = str;
    this->hitPoint = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    this->name = other.name;
    this->hitPoint = other.hitPoint;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this == &other)
        return *this;    
    this->name = other.name;
    this->hitPoint = other.hitPoint;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->hitPoint <= 0 || this->energyPoints <= 0)
        std::cout << "ClapTrap " << this->name << " can't attack no hit points or energy left" << std::endl;
    else
    {
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage! "<< std::endl;    
    }
}

ScavTrap::~ScavTrap()
{
    std::cout << " called Destructor ScavTrap " << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gatekeeper mode." << std::endl;
}