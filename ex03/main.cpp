/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:36 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/26 18:27:01 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include"FragTrap.hpp"
#include"DiamondTrap.hpp"

int main() 
{
    // ScavTrap claptrap("JEd-TP");
    // FragTrap claptrap1("JEd-TP");
    DiamondTrap diamond("Test-DM");
    diamond.attack("enemy");
    diamond.whoAmI();
    return 0;
}