/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:34:10 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/23 18:34:10 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public	IMateriaSource
{
    private:
        AMateria	*_inventory[4];

    public:
        MateriaSource( void );
        MateriaSource( const MateriaSource &m );

        MateriaSource	&operator=( const MateriaSource &m );

        void		learnMateria(AMateria*);
        AMateria*	createMateria( std::string const &type);

        ~MateriaSource();
};

#endif