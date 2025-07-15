/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:11:06 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 14:46:45 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
	protected:
		std::string	type;

	public:
		AAnimal();
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &copy);
		virtual	~AAnimal();

		AAnimal	&operator=(const AAnimal &copy);

		std::string		getType(void) const;
		virtual void	makeSound() const = 0;
};