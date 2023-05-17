/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	//first create object 'a'.
	//Default constructor called
	//getRawBits member function called
	Fixed a;
	//then create 'b' that as a duplicate of 'a' using copy constructor
	Fixed b(a);
	//then create 'c' as a duplicate of 'b' using copy assignment operator
	Fixed c;
	c = b;
	//they all will return 0.
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}

//output:
// Default constructor called //from fixed a
// Copy constructor called // from fixed b(a);
// Copy assignment operator called // <-- This line may be missing depending on your implementation
// getRawBits member function called // from fixed b(a) as getRawbits called from 'a'
// Default constructor called //from fixed b
// Copy assignment operator called // ?
// getRawBits member function called //std::cout << a.getRawBits() << std::endl;
// getRawBits member function called //std::cout << b.getRawBits() << std::endl;
// 0 //std::cout << a.getRawBits() << std::endl;
// getRawBits member function called //std::cout << b.getRawBits() << std::endl;
// 0 //std::cout << b.getRawBits() << std::endl; //std::cout << b.getRawBits() << std::endl;
// getRawBits member function called
// 0
// Destructor called
// Destructor called
// Destructor called

