/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:38:35 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/19 17:38:35 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void):_type("default")
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal Assignation operator called" << std::endl;
    if (this == &copy)
        return *this;

    this->_type = copy._type;
    return *this;
}

void WrongAnimal::makeSound(void)const
{
    std::cout << "This WrongAnimal doesn't make any sound." << std::endl;
}

std::string	WrongAnimal::getType(void)const
{
    return (this->_type);
}