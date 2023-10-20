/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:03:44 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/19 13:09:22 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"


ScavTrap::ScavTrap(std::string str)
{
    std::cout << " default Constructor ScavTrap " << std::endl;
    this->name = str;
    this->hitPoint = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

ScavTrap::~ScavTrap()
{
    std::cout << " called destructor ScavTrap " << std::endl;
}
void ScavTrap::highFivesGuys(void)
{
    
}