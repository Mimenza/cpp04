/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:33:03 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/23 18:33:03 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual	void		learnMateria( AMateria* ) = 0;
        virtual	AMateria*	createMateria( std::string const &type ) = 0;

        virtual	~IMateriaSource() {}
};

# endif