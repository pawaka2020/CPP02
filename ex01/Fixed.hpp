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

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
# include <cmath>

class Fixed {
public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed();

    Fixed& operator=(const Fixed& other);

    int getRawBits() const;
    void setRawBits(const int rawBits);

    float toFloat() const;
    int toInt() const;

private:
    int _rawBits;
    static const int _fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif