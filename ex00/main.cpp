/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:10:08 by lgrisel           #+#    #+#             */
/*   Updated: 2025/07/15 13:51:06 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* i = new Cat();
// 	const Animal* j = new Dog();

// 	std::cout << i->getType() << " " << std::endl;
// 	std::cout << j->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
	
// 	delete meta;
// 	delete i;
// 	delete j;
// 	return 0;
// }

void	good(void)
{
	Animal const	*meta = new Animal();
	Animal const	*dog = new Dog();
	Animal const	*cat = new Cat();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;

	delete meta;
	delete dog;
	delete cat;
}

void	wrong(void)
{
	WrongAnimal const	*meta = new WrongAnimal();
	WrongAnimal const	*dog = new WrongDog();
	WrongAnimal const	*cat = new WrongCat();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;

	delete meta;
	delete dog;
	delete cat;
}

int	main(void)
{
	good();
	std::cout << std::endl << std::endl << std::endl;
	wrong();
	return (0);
}