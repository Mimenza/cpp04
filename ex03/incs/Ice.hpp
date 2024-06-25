/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:35:56 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/21 11:35:56 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice( void );
	Ice( const Ice &i );

	Ice	&operator=( const Ice &i );

	AMateria	*clone( void ) const;
	void		use( ICharacter &target );

	~Ice();
};

#endif