/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
new member functions:
6 comparison operators >,<, >=, <=, ==, !=
4 arithmetic operators: +, -, *, /
4 increment/decrement perators 
- pre-increment
- post-increment
- pre-decrement
- post-decrement
4 public overloaded functions
- 'min' fixed-point
- 'min' constant fixed-point
- 'max' fixed-point
- 'max' constant fixed-point
*/

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
# include <cmath>

class Fixed {
public:
	//constructors
    Fixed();
    Fixed(const Fixed& other);
    Fixed(const int num);
    Fixed(const float num);
	//destructor
    ~Fixed();
	//comparison operators
	int operator>(const Fixed &other) const;
	int operator<(const Fixed &other) const;
	int operator>=(const Fixed &other) const;
	int operator<=(const Fixed &other) const;
	int operator==(const Fixed &other) const;
	int operator!=(const Fixed &other) const;
	//arithmetic operators
	//except for =, the rest returns a new object
	Fixed& operator=(const Fixed &other);
	Fixed operator+(const Fixed &other);
	Fixed operator-(const Fixed &other);
	Fixed operator*(const Fixed &other);
	Fixed operator/(const Fixed &other);
	//increment/decrement operators
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	//min and max
	//getters and setters
    int getRawBits() const;
    void setRawBits(const int rawBits);
	//member functions
	//from ex01
    float toFloat() const;
    int toInt() const;
	//from ex02
	//return greater or lesser of objects using > or < operator overloads
	static const Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static const Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);
	
private:
	//fields
    int _rawBits;
    static const int _fractionalBits = 8;
};

//operator overloads
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif