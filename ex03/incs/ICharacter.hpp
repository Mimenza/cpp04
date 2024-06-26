/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:32:38 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/23 18:32:38 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter() {}

        virtual	std::string	const	&getName( void ) = 0;
        virtual	void				equip( AMateria	*m ) = 0;
        virtual	void				unequip( int	id ) = 0;
        virtual	void				use( int id, ICharacter	&target ) = 0;

};

#endif