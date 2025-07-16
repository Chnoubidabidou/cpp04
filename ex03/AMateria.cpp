/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:16:43 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/16 11:57:13 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type): _type(type)
{
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria::~AMateria() { }

AMateria	&AMateria::operator=(AMateria const &aMateria)
{
	this->_type = aMateria._type;
	return (*this);
}

const std::string	&AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target) const
{
	std::cout << "* Using " << _type << " materia on " << target.getName() << " *" << std::endl;
}
