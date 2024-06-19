/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:25:09 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/19 17:25:09 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"

Dog::Dog(void): Animal()
{
    this->_type = "Dog";
    std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal()
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog(void)
{
    std::cout << "Dog Deconstructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this == &copy)
        return *this;

    this->_type = copy._type;
    return *this;
}

void Dog::makeSound(void)const
{
	std::cout << this->_type << " says: **Wooffff woff**" << std::endl;
}
