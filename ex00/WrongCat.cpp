/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:37:33 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 13:44:00 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	*static_cast<WrongAnimal *>(this) = copy;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meooooow !" << std::endl;
}
