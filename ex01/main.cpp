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
    const Animal* i = new Cat();
    i->makeSound();
}