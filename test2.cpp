/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:17:20 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/23 17:28:48 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class test2
{
    private:
        int a;
    public:
        test2();
        test2(int a);
        void setValue(int a)
        {
            this->a = a;
        }
        int getValue(void)
        {
            return a;
        }
        ~test2();
};

test2::test2():a(0)
{
    a = 11;
    std::cout << "Default" << std::endl;
}

test2::test2(int a)
{
    // this->a = a; 
    // setValue(a);
    std::cout << "Parameterize" << std::endl;
}

test2::~test2()
{
}
int main()
{
    test2  A(1);
    std::cout << A.getValue() << std::endl;
}