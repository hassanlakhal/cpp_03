/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:50:59 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/21 19:45:55 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef FRAGTRAP_HPP
// #ifdef FRAGTRAP_HPP

#include"ScavTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    private:
        
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();
};
// #endif