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
# include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *_brain;

    public:
        Dog();
        Dog(const Dog &copy);
        ~Dog();
        Dog &operator=(const Dog &src);
        void makeSound(void)const;

        Brain *getBrain()const;
        std::string getIdea(int id);
};

#endif