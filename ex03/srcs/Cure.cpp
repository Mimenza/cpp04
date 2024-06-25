/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:45:37 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/21 11:45:37 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cure.hpp"

Cure::Cure( void ): AMateria("cure")
{
	//this->AMateria::_type = "cure";
}

Cure::Cure( const Cure &c ): AMateria(c)
{
	//this->AMateria::_type = c._type;
}

Cure	&Cure::operator=( const Cure &c )
{
	if (this != &c)
	{
		this->_type = c._type;
	}
	return (*this);
}

AMateria	*Cure::clone( void ) const
{
	return (new Cure( *this ));
}

void	Cure::use( ICharacter &target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
}