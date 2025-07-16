/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:44:53 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/16 11:45:13 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual	~IMateriaSource() { };

		virtual void		learnMateria(AMateria *materia) = 0;
		virtual AMateria	*createMateria(const std::string &type) = 0;
};
