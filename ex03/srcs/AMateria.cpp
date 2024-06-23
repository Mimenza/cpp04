/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:02:59 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/23 19:21:29 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AMateria.hpp"

AMateria::AMateria( void ): _type("undefined")
{
}

AMateria::AMateria( std::string	const &type ): _type(type)
{
}

AMateria::AMateria( const AMateria &a ): _type(a._type)
{
}

AMateria::~AMateria()
{
}

AMateria	&AMateria::operator=( const AMateria &a )
{
	if (this != &a)
		this->_type = a._type;
	return (*this);
}

std::string const	&AMateria::getType( void ) const
{
	return (this->_type);
}

void	AMateria::use( ICharacter &target)
{
	(void) target;
}