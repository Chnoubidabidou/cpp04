/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:37:35 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 13:46:02 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void): WrongAnimal("WrongDog")
{
	std::cout << "WrongDog: Default constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &copy): WrongAnimal(copy)
{
	std::cout << "WrongDog: Copy constructor called" << std::endl;
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog: Destructor called" << std::endl;
}

WrongDog	&WrongDog::operator=(const WrongDog &copy)
{
	*static_cast<WrongAnimal *>(this) = copy;
	return (*this);
}

void	WrongDog::makeSound(void) const
{
	std::cout << "Bark !" << std::endl;
}
