/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduchi <vduchi@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:55:31 by vduchi            #+#    #+#             */
/*   Updated: 2023/12/29 14:12:09 by vduchi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main(void)
{
	Cat cat;
	Dog dog;
	Animal animal;
	WrongCat wrongCat;
	WrongAnimal wrongAnimal;

	std::cout << std::endl;
	animal.makeSound();
	wrongAnimal.makeSound();
	cat.makeSound();
	wrongCat.makeSound();
	dog.makeSound();
	std::cout << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound(); // will output the cat sound!
	k->makeSound(); // will output the wrong animal sound!
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete k;
}

