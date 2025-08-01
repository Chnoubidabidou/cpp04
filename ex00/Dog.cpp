/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:12:30 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 14:05:34 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
	*static_cast<Animal *>(this) = copy;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark !" << std::endl;
}
