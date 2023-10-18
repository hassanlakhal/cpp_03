/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:36 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/17 18:52:12 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main() 
{
    ScavTrap claptrap("CL4P-TP");
    // claptrap.takeDamage(2);
    claptrap.attack("Enemy");
    // claptrap.takeDamage(15);
    claptrap.beRepaired(20);
    claptrap.takeDamage(20);
    return 0;
}