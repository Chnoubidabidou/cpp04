/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:31:15 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/16 11:50:47 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (size_t i = 0; i < Character::inventory_slot_count; i++)
		_materias[i] = NULL;
}

Character::Character(const std::string &name): _name(name)
{
	for (size_t i = 0; i < Character::inventory_slot_count; i++)
		_materias[i] = NULL;
}

Character::Character(const Character &copy)
{
	for (unsigned int i(0); i < Character::inventory_slot_count; i++)
	{
		if (copy._materias[i])
			this->_materias[i] = copy._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
}

Character::~Character()
{
	for (unsigned int i = 0; i < Character::inventory_slot_count; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

Character	&Character::operator=(const Character &copy)
{
	if (this == &copy)
		return (*this);
	_name = copy._name;
	for (size_t i = 0; i < Character::inventory_slot_count; i++)
	{
		if (_materias[i])
			delete _materias[i];
		_materias[i] = copy._materias[i] == NULL ? NULL : copy._materias[i]->clone();
	}
	return (*this);
}

const std::string	&Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *materia)
{
	if (materia == NULL)
		return ;
	for (size_t i = 0; i < Character::inventory_slot_count; i++)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = materia->clone();
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || (size_t)idx >= Character::inventory_slot_count)
		return ;
	if (_materias[idx] != NULL)
		delete _materias[idx];
	_materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	AMateria	*materia = _materias[idx];

	if (materia == NULL)
		return ;
	materia->use(target);
}
