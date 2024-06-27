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
    const Animal* animal1 = new Animal();
    const Animal* dog1 = new Dog();
    const Animal* cat1 = new Cat();

    std::cout << "Dog: " << dog1->getType() << " " << std::endl;
    std::cout << "Cat: " << cat1->getType() << " " << std::endl;

    dog1->makeSound();
    cat1->makeSound(); //will output the cat sound!
    animal1->makeSound();

    delete animal1;
    delete dog1;
    delete cat1;

// -------------------------------------------------------

    const WrongAnimal* animal2 = new WrongAnimal();
    const Animal* dog2 = new Dog();
    const WrongAnimal* cat2 = new WrongCat();

    std::cout << "Dog: " << dog2->getType() << " " << std::endl;
    std::cout << "Cat: " << cat2->getType() << " " << std::endl;

    dog2->makeSound();
    cat2->makeSound(); //will output the Animal sound!
    animal2->makeSound();

    delete animal2;
    delete dog2;
    delete cat2;

    return 0;
}