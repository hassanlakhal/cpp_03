/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:03:48 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/17 18:24:15 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
    private:
        /* data */
    public:
        ScavTrap(std::string str);
        ~ScavTrap();
        void highFivesGuys(void);
};