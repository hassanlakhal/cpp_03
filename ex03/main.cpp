/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:36 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/29 15:46:31 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"DiamondTrap.hpp"

int main() 
{
    DiamondTrap diamond("Test-DM");
    diamond.attack("enemy");
    diamond.whoAmI();
    return 0;
}