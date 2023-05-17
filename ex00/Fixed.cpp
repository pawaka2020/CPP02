/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//set value of _rawBits to 0 following output in .pdf
Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

//destructor
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

//copy constructor.
//creates a object that copies the properties of the object placed inside its parameter.
Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called" << std::endl;
	//copy assignment operator is called here
	*this = fixed;
}

//copy assignment operator
//creates a class object that is a duplicate of the object inside parameter.
Fixed& Fixed::operator = (const Fixed &fixed){
	std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return _rawBits;
}

void Fixed::setRawBits(const int &rawBits){
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = rawBits;
}