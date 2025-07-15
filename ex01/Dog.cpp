/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:12:30 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 14:16:17 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	brain = new Brain();
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy), brain(NULL)
{
	*this = copy;
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	if (brain != NULL)
		delete brain;
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return (*this);
	Animal::operator=(copy);
	if (brain != NULL)
		delete brain;
	brain = new Brain(*copy.brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark !" << std::endl;
}
