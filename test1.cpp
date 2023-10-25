/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:43:06 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/24 22:48:44 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

using namespace std;

class ClapTrap {
private:
    string name;

public:
    ClapTrap(const string& name) : name(name) {}
    void attack() {
        cout << "ClapTrap's attack!" << endl;
    }
    string getName() const {
        return name;
    }
};

class FragTrap : virtual public ClapTrap {
public:
    FragTrap(const string& name) : ClapTrap(name + "_clap_name") {}
    // Other FragTrap-specific attributes and functions
};

class ScavTrap : virtual  public ClapTrap {
public:
    ScavTrap(const string& name) : ClapTrap(name + "_clap_name") {}
    // Other ScavTrap-specific attributes and functions
};

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
    std::string name;
public:
    DiamondTrap(const string& name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
        // Constructor code for DiamondTrap
    }

    void whoAmI() {
        cout << "My name is " << name << " and my ClapTrap name is " << ClapTrap::getName() << endl;
    }
};

int main() {
    DiamondTrap diamond("DiamondTrap");
    diamond.whoAmI();
}



