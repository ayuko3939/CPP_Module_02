/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:26:22 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/21 18:44:20 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
  private:
	int 				_val;
	static const int	_bits = 8;

  public:
	// A default constructor
	Fixed();
	// A constructor that takes a constant integer  <-New!!
	Fixed(const int intVal);
	// A constructor that takes a constant floating-point number  <-New!!
	Fixed(const float floatVal);
	// A copy constructor
	Fixed(const Fixed &src);

	// A copy assignment operator overload
	Fixed &operator=(const Fixed &src);

	// A destructor
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	// Functions that converts the fixed-point value  <-New!!
	float toFloat(void) const;
	int toInt(void) const;
};

// An overload of the insertion («) operator  <-New!!
std::ostream &operator<<(std::ostream &os, const Fixed &p);

#endif