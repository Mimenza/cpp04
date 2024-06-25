/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:02:51 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/23 19:21:10 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string	_type;

    public:
        AMateria( void );
        AMateria( std::string const &type );
        AMateria( AMateria const &a );

        AMateria	&operator=( const AMateria &a );

        std::string const	&getType( void ) const;

        virtual	AMateria	*clone( void ) const = 0;
        virtual	void		use( ICharacter &target );

        virtual	~AMateria();
};

#endif