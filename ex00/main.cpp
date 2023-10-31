/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:36 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/31 17:55:04 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main() 
{
    ClapTrap claptrap("CL4P-TP");
    claptrap.takeDamage(10);
    claptrap.attack("Enemy");
    return 0;
}