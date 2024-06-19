/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:39:43 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/19 17:39:43 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal()
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Deconstructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "WrongCat Assignation operator called" << std::endl;
    if (this == &copy)
        return *this;

    this->_type = copy._type;
    return *this;
}

void WrongCat::makeSound(void)const
{
	std::cout << this->_type << " says: **Meeeoow**" << std::endl;
}