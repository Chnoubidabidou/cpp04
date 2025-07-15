/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:11:06 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 13:33:02 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &copy);
		virtual	~Animal();

		Animal	&operator=(const Animal &copy);

		std::string		getType(void) const;
		virtual void	makeSound() const;
};