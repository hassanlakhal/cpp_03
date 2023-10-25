/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:26 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/24 13:28:06 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():hitPoint(10), energyPoints(10),attackDamage(0)
{
    std::cout << "Default constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Called Destructor" << std::endl;
}

ClapTrap::ClapTrap(std::string str) :hitPoint(10), energyPoints(10),attackDamage(0)
{
    std::cout << "parametrize Constructor" << std::endl;
    this->name = str;
}

ClapTrap& ClapTrap::operator= (ClapTrap &other)
{
    if (this == &other)
        return *this;
    this->name = other.name;
    this->hitPoint = other.hitPoint;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return *this;
}

ClapTrap::ClapTrap(ClapTrap& other) : name(other.name), hitPoint(other.hitPoint), energyPoints(other.energyPoints),attackDamage(other.attackDamage)
{
    std::cout << "copy Constructor" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->hitPoint <= 0 || this->energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " can't attack no hit points or energy left" << std::endl;
    } 
    else
    {
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage! "<< std::endl;    
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoint > 0)
    {
        this->hitPoint -= amount;
        if (this->hitPoint < 0)
            this->hitPoint = 0;
        std::cout << "ClapTrap " << name << " attack " << amount << " hit points of damage " << std::endl;
        this->energyPoints--;
    }
    else
        std::cout << "ClapTrap " << this->name << " can't attack no hit points or energy left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->hitPoint <= 0 || this->energyPoints <= 0) {
        std::cout << "ClapTrap " << this->name << " can't attack no hit points or energy left" << std::endl;
        return ;
    }else
    {
        this->hitPoint += amount;
        std::cout << "ClapTrap " << name << " repairs itself gaining " << amount << " hit points " << std::endl;
        this->energyPoints--; 
    }
}