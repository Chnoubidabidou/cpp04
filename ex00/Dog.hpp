/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:12:31 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 13:30:25 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
	private:
		std::string	type;

	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();

		Dog		&operator=(const Dog &copy);
		void	makeSound(void) const;
};