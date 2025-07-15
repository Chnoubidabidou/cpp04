/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:07:34 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 14:11:10 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#define IDEA_COUNT 100

class Brain
{
	private:
		std::string	ideas[IDEA_COUNT];

	public:
		Brain(void);
		Brain(const Brain &copy);
		~Brain();

		Brain	&operator=(const Brain &copy);
};