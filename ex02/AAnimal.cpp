/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:11:04 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 14:36:38 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): type("animal")
{
	std::cout << "AAnimal: Default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &type): type(type)
{
	std::cout << "AAnimal: Type constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy): type(copy.type)
{
	std::cout << "AAnimal: Copy constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal: Destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &copy)
{
	if (this == &copy)
		return (*this);
	this->type = copy.type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}
