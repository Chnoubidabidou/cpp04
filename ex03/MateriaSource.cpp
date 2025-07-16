/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:26:34 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/16 11:54:16 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < MateriaSource::slot_count; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (size_t i = 0; i < MateriaSource::slot_count; i++)
		_materias[i] = NULL;
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < MateriaSource::slot_count; i++)
		if (_materias[i] != NULL)
			delete _materias[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	if (this == &copy)
		return (*this);
	for (size_t i = 0; i < MateriaSource::slot_count; i++)
	{
		if (_materias[i] != NULL)
			delete _materias[i];
		_materias[i] = copy._materias[i] == NULL ? NULL : copy._materias[i]->clone();
	}
	return (*this);
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (size_t i = 0; i < MateriaSource::slot_count; i++)
		if (_materias[i]->getType() == type)
			return (_materias[i]->clone());
	return (NULL);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	size_t	i;
	if (materia == NULL)
		return ;

	for (i = 0; i < MateriaSource::slot_count && this->_materias[i]
		&& this->_materias[i]->getType() != materia->getType(); i++);
	if (i < MateriaSource::slot_count)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		this->_materias[i] = materia->clone();
	}
}
