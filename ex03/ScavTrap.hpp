/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:03:48 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/21 19:46:16 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include"ClapTrap.hpp"


class ScavTrap: virtual public ClapTrap
{
    private:
      
    public:
        ScavTrap();
        ScavTrap(std::string str);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        void attack(const std::string& target);
        ~ScavTrap();
        void guardGate();
};

#endif