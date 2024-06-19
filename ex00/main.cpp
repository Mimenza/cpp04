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

int main()
{
    const Animal* meta1 = new Animal();
    const Animal* j1 = new Dog();
    const Animal* i1 = new Cat();

    std::cout << j1->getType() << " " << std::endl;
    std::cout << i1->getType() << " " << std::endl;

    i1->makeSound(); //will output the cat sound!
    j1->makeSound();
    meta1->makeSound();

    delete meta1;
    delete j1;
    delete i1;

// -------------------------------------------------------

    const WrongAnimal* meta2 = new WrongAnimal();
    const Animal* j2 = new Dog();
    const WrongAnimal* i2 = new WrongCat();

    std::cout << j2->getType() << " " << std::endl;
    std::cout << i2->getType() << " " << std::endl;

    i2->makeSound(); //will output the Animal sound!
    j2->makeSound();
    meta2->makeSound();

    delete meta2;
    delete j2;
    delete i2;

    return 0;
}