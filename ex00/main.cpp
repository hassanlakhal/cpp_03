/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:36 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/24 13:29:53 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main() 
{
    ClapTrap claptrap("CL4P-TP");
    claptrap.takeDamage(10);
    claptrap.attack("Enemy");
    // claptrap.takeDamage(15);
    // // claptrap.beRepaired(20);
    // claptrap.takeDamage(20);
    // claptrap.attack("Enemy");
    return 0;
}