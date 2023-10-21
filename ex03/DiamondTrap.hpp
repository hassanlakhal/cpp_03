/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:40:45 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/21 19:51:12 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include"FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
    private:
    
    public:
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap& operator=(const DiamondTrap& other);
};


