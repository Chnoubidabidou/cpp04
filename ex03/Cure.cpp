/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:20:44 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/16 11:52:59 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(const Cure &copy): AMateria(copy._type)
{
}

Cure::~Cure()
{
}

Cure	&Cure::operator=(const Cure &copy)
{
	*static_cast<AMateria *>(this) = copy;
	return (*this);
}

Cure	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) const
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
