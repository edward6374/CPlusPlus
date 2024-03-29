/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduchi <vduchi@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:54:24 by vduchi            #+#    #+#             */
/*   Updated: 2023/09/03 18:32:52 by vduchi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of string: " << &str << std::endl;
	std::cout << "Memory address of pointer: " << stringPTR << std::endl;
	std::cout << "Memory address of reference: " << &stringREF << std::endl;

	std::cout << "Value of string: " << str << std::endl;
	std::cout << "Value of pointer: " << *stringPTR << std::endl;
	std::cout << "Value of reference: " << stringREF << std::endl;
}
