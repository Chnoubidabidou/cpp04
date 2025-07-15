/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:12:28 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 13:30:36 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat: Destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
	*static_cast<Animal *>(this) = copy;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoooooow !" << std::endl;
}
