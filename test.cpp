/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:12:22 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/23 22:47:05 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
/* base class */

class Base {

    protected:

        int x;
        int y;
        int z;

    public:

        Base(void) : x(0) {}

};


class Father : public virtual Base
{
    protected:
        int preset;

    public:
        Father() : preset(1)
        {
            y = 1;
            z = 1;
        }
};

class Mother : public virtual Base
{
    protected:
        int preset;

    public:
        Mother() : preset(2)
        {
            y = 2;
            z = 2;
        }
};

class Child : public Father, public Mother
{
    public:
        Child()
        {
            y = Father::y;
            z = Mother::z;
        }
        int getX() const {return x;}
        int getY() const {return y;}
        int getZ() const {return z;}
};

int main()
{
    Child A;
    std::cout << A.getX() << "\t" <<A.getY()<< "\t" << A.getZ() << std::endl;
}
