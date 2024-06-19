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
    this->_brain = new Brain();
    if (this->_brain == NULL)
    {
        std::cerr << "Error creating the Cat Brain" << std::endl;
        exit(1);
    }
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat(void)
{
    delete(this->_brain);
    std::cout << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &copy)
		return *this;

	this->_type = copy._type;
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	*this->_brain = *copy._brain;
	return *this;
}

void Cat::makeSound(void)const
{
	std::cout << this->_type << " says: **Meeeoow**" << std::endl;
}
