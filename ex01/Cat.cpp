/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:12:28 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 14:15:25 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	brain = new Brain();
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy), brain(NULL)
{
	*this = copy;
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	if (brain != NULL)
		delete brain;
	std::cout << "Cat: Destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return (*this);
	Animal::operator=(copy);
	if (brain != NULL)
		delete brain;
	brain = new Brain(*copy.brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoooooow !" << std::endl;
}
