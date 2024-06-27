/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:10:15 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/27 13:38:15 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Character.hpp"

Character::Character( void )
{
	int	i = 0;

	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}
	this->_name = "Undefined";
}

Character::Character( std::string name )
{
	int	i = 0;

	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}
	this->_name = name;
}

Character::Character( const Character &c )
{
	int	i = 0;

	while (i < 4)
	{
		this->_inventory[i] = NULL;
		if (c._inventory[i] != NULL)
			this->_inventory[i] = c._inventory[i]->clone();
		i++;
	}
	this->_name = c._name;
}

Character	&Character::operator=( const Character &c )
{
	if (this != &c)
	{
		int	i = 0;

		while (i < 4)
		{
			if (this->_inventory[i] != NULL)
				delete(this->_inventory[i]);
			this->_inventory[i] = NULL;
			if (c._inventory[i] != NULL)
				this->_inventory[i] = c._inventory[i]->clone();
			i++;
		}
		this->_name = c._name;
	}
	return (*this);
}

std::string	const	&Character::getName( void )
{
	return (this->_name);
}

void	Character::equip( AMateria	*m )
{
	int	i = 0;

	while (i < 4)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
		i++;
	}
	if (i == 4)
		delete m;
}

void	Character::unequip( int	id )
{
	if (id < 4 && id >= 0 && this->_inventory[id] != NULL)
	{
		//floor[f_index] = this->_inventory[id];
		floor.push_back(this->_inventory[id]);
        this->_inventory[id] = NULL;
	}
	//this->_inventory[id] = NULL;
	//delete (this->_inventory[id]);
}

void	Character::use( int id, ICharacter	&target )
{
	if (id >= 0 && id < 4 && this->_inventory[id] != NULL)
		this->_inventory[id]->use(target);
}

Character::~Character()
{
	int	i = 0;

	while (i < 4)
	{
		if (this->_inventory[i] != NULL)
			delete (this->_inventory[i]);
		i++;
	}
	
	for (std::vector<AMateria*>::iterator it = floor.begin(); it != floor.end(); ++it)
        delete *it;
}