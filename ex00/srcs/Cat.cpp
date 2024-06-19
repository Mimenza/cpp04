/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:08:36 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/19 17:08:36 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"

Cat::Cat(void): Animal()
{
    this->_type = "Cat";
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat(void)
{
    std::cout << "Cat Deconstructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if (this == &copy)
        return *this;

    this->_type = copy._type;
    return *this;
}

void Cat::makeSound(void)const
{
	std::cout << this->_type << " says: **Meeeoow**" << std::endl;
}
