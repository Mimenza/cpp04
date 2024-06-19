/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:07:59 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/19 18:07:59 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Brain::~Brain()
{
	std::cout << "Brain Deconstructor called" << std::endl;
}

// Overloaded Operators
Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		if (src._ideas[i].length() > 0)
			this->_ideas[i].assign(src._ideas[i]);
	}
	return *this;
}

// Public Methods
