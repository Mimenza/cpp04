/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:35:55 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/21 11:35:55 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
# define	CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure( void );
        Cure( const Cure &c );

        Cure	&operator=( const Cure &c );

        AMateria	*clone( void ) const;
        void		use( ICharacter &target );

        ~Cure();
    };

#endif