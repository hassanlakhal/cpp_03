/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:36 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/26 14:55:28 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main() 
{
    ClapTrap test ("test");
    test.attack("tets1");
    ScavTrap claptrap("JEd-TP");
    claptrap.attack("Enemy");
    claptrap.takeDamage(10);
    claptrap.takeDamage(80);
    claptrap.takeDamage(10);
    claptrap.takeDamage(10);
    return 0;
}