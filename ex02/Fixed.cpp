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

Fixed::Fixed() : _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int num) {
    std::cout << "Int constructor called" << std::endl;
    _rawBits = num << _fractionalBits;
}

Fixed::Fixed(const float num) {
    std::cout << "Float constructor called" << std::endl;
    _rawBits = roundf(num * (1 << _fractionalBits));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        _rawBits = other._rawBits;
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return _rawBits;
}

void Fixed::setRawBits(const int rawBits) {
    std::cout << "setRawBits member function called" << std::endl;
    _rawBits = rawBits;
}

float Fixed::toFloat() const {
    return static_cast<float>(_rawBits) / (1 << _fractionalBits);
}

int Fixed::toInt() const {
    return _rawBits >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

//ex02 additions
//comparison operators
int Fixed::operator>(const Fixed& other) const{
	if (getRawBits() > other.getRawBits()) return 1;
	return 0;
}
int Fixed::operator<(const Fixed& other) const {
	if (getRawBits() < other.getRawBits()) return 1;
	return 0;
}
int Fixed::operator>=(const Fixed& other) const {
	if (getRawBits() >= other.getRawBits()) return 1;
	return 0;
}
int Fixed::operator<=(const Fixed& other) const {
	if (getRawBits() <= other.getRawBits()) return 1;
	return 0;
}
int Fixed::operator==(const Fixed& other) const {
	if (getRawBits() == other.getRawBits()) return 1;
	return 0;
}
int Fixed::operator!=(const Fixed& other) const {
	if (getRawBits() == other.getRawBits()) return 1;
	return 0;
}
//arithmetic operators
Fixed Fixed::operator+(const Fixed &other) {
	return(Fixed(toFloat() + other.toFloat()));
}
Fixed Fixed::operator-(const Fixed &other) {
	return(Fixed(toFloat() - other.toFloat()));
}
Fixed Fixed::operator*(const Fixed &other) {
	return(Fixed(toFloat() * other.toFloat()));
}
Fixed Fixed::operator/(const Fixed &other) {
	return(Fixed(toFloat() / other.toFloat()));
}
//increment/decrement operators
Fixed& Fixed::operator++() {
    ++_rawBits;
    return *this;
}
Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++(*this);
    return temp;
}
Fixed& Fixed::operator--() {
	--_rawBits;
	return *this;
}
Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	--(*this);
	return temp; 
}
//min & max public functions
const Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	return (f1 < f2) ? f1 : f2;
}
const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) {
    return (f1 < f2) ? f1 : f2;
}
const Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	return (f1 > f2) ? f1 : f2;
}
const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) {
    return (f1 > f2) ? f1 : f2;
}