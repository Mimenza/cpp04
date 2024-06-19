/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:59:25 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/19 17:59:25 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    private:
        std::string _ideas[100];

    public:
        Brain();
        Brain(const Brain &copy);
        virtual ~Brain();
        Brain &operator=(const Brain &src);
};

#endif