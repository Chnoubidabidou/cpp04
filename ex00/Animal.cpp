/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:11:04 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 13:32:44 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("animal")
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const std::string &type): type(type)
{
	std::cout << "Animal: Type constructor called" << std::endl;
}

Animal::Animal(const Animal &animal): type(animal.type)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "..." << std::endl;
}
