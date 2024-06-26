/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:10:17 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/26 15:21:02 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <vector>

class Character: public	ICharacter
{
	private:
		AMateria	*_inventory[4];
		std::string	_name;

        std::vector<AMateria*> floor;

	public:
		Character( void );
		Character( const std::string name );
		Character( const Character &c );

		Character	&operator=( const Character &c );

		std::string	const	&getName( void );
		void				equip( AMateria	*m );
		void				unequip( int	id );
		void				use( int id, ICharacter	&target );
		
		virtual	~Character();
};


#endif