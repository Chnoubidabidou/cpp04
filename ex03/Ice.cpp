/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:20:46 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/16 11:53:23 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(const Ice &copy): AMateria(copy._type)
{
}

Ice::~Ice()
{
}

Ice	&Ice::operator=(const Ice &copy)
{
	*static_cast<AMateria *>(this) = copy;
	return (*this);
}

Ice	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) const
{
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *" << std::endl;
}
