/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:00:30 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 14:22:17 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

# define ANI_COUNT 10

int	main(void)
{
	const Animal	*a;
	const Animal	*b;
	const Animal	*c;
	const Animal	*d;
	const Animal	*e;
	const Animal	*f;
	Animal	*animals[ANI_COUNT];

	a = new Cat();
	b = new Dog();
	delete a;
	delete b;
	std::cout << std::endl;

	d = new Cat();
	c = d;
	delete d;
	std::cout << std::endl;

	f = new Dog();
	e = f;
	delete f;
	std::cout << std::endl;

	for (size_t i = 0; i < ANI_COUNT; ++i)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << std::endl;

	for (size_t i = 0; i < ANI_COUNT; ++i)
		delete animals[i];
	return (0);
}