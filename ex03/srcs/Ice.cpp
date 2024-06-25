/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:45:38 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/21 11:45:38 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Ice.hpp"

Ice::Ice( void ): AMateria("ice")
{
	//this->AMateria::_type = "ice";
}

Ice::Ice( const Ice &i ): AMateria(i)
{
	//this->AMateria::_type = i._type;
}

Ice	&Ice::operator=( const Ice &i )
{
	if (this != &i)
	{
		this->_type = i._type;
	}
	return (*this);
}

AMateria	*Ice::clone( void ) const
{
	return (new Ice( *this ));
}

void	Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
}