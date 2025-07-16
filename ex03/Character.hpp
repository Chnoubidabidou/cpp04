/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:31:16 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/16 11:45:42 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class Character: public ICharacter
{
	public:
		static const size_t	inventory_slot_count = 4;

	private:
		std::string	_name;
		AMateria	*_materias[Character::inventory_slot_count];

	public:
		Character();
		Character(const std::string &name);
		Character(const Character &copy);
		~Character(void);

		Character	&operator=(const Character &copy);

		virtual const std::string	&getName() const;
		virtual void				equip(AMateria *materia);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);
};
