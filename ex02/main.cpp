/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:18:59 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/19 16:18:59 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/Animal.hpp"
#include "incs/Cat.hpp"
#include "incs/WrongAnimal.hpp"
#include "incs/WrongCat.hpp"
#include "incs/Dog.hpp"
#include "incs/Brain.hpp"

int main()
{
	Animal* Zoo[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			Zoo[i] = new Dog();
		else
			Zoo[i] = new Cat();
	}

    std::cout << "The type is: " << Zoo[4]->getType() << std::endl;
    std::cout << "The idea is: " << Zoo[4]->getBrain()->getIdea(101) << std::endl;
   
	Zoo[4]->getBrain()->setIdea("patata", 100);

    std::cout << "The idea is: " << Zoo[4]->getBrain()->getIdea(1) << std::endl;
    for (int i = 0; i < 10; i++)
	{
		Zoo[i]->makeSound();
		delete Zoo[i];
	}
}
