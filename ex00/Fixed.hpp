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
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
		//constuctor and destructor
		Fixed();
		~Fixed();
		//copy constructor
		Fixed(const Fixed &fixed);
		//copy assignment operator
		Fixed& operator = (const Fixed &fixed);
		//getters and setters
		int getRawBits(void) const;
		void setRawBits(const int &rawBits);
	private:
		//fields
		int	_rawBits;
		static const int _fractBits = 8;
};

#endif