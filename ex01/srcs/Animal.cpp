/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:54:15 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/19 16:54:15 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"

Animal::Animal(void):_type("default")
{
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal(void)
{
    std::cout << "Animal Deconstructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &copy)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this == &copy)
        return *this;

    this->_type = copy._type;
    return *this;
}

void Animal::makeSound(void)const
{
    std::cout << "This animal doesn't make any sound." << std::endl;
}

std::string	Animal::getType(void)const
{
    return (this->_type);
}

std::string Animal::getIdea(int id)
{
	(void)id;
    return "";
}
