/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:07:26 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 14:11:14 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
}

Brain::~Brain(void)
{
}

Brain	&Brain::operator=(const Brain &copy)
{
	if (this == &copy)
		return (*this);
	for (size_t i = 0; i < IDEA_COUNT; i++)
		ideas[i] = copy.ideas[i];
	return (*this);
}
