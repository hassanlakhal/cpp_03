/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:36 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/19 13:40:04 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main() 
{
    ScavTrap claptrap("JEd-TP");
    // claptrap.takeDamage(2);
    claptrap.attack("Enemy");
    claptrap.takeDamage(10);
    claptrap.takeDamage(80);
    claptrap.takeDamage(10);
    // claptrap.takeDamage(100);
    // claptrap.beRepaired(20);
    claptrap.takeDamage(10);
    return 0;
}