/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:03:44 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/17 18:45:13 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"


ScavTrap::ScavTrap(std::string str)
{
    std::cout << "Constracteur" << std::endl;
    this->name = str;
    this->hitPoint = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    // ClapTrap(str);
}

ScavTrap::~ScavTrap()
{
}
void ScavTrap::highFivesGuys(void)
{
    
}