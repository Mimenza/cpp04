/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:24:09 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/19 17:24:09 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog &copy);
        ~Dog();
        Dog &operator=(const Dog &src);
        void makeSound(void)const;
};

#endif