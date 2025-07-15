/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:37:34 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 13:44:14 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
		public:
			WrongCat();
			WrongCat(const WrongCat &copy);
			~WrongCat();

			WrongCat	&operator=(const WrongCat &copy);
			void		makeSound(void) const;
};