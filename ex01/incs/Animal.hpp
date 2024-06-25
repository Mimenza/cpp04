/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:21:28 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/19 16:21:28 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const Animal &copy);
        virtual ~Animal();
        Animal &operator=(const Animal &src);
        virtual void makeSound(void)const;
        std::string getType(void)const;
        //virtual Brain* getBrain() const = 0;
};

#endif