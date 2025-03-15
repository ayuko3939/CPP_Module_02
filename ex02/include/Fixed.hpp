/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:26:22 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/21 18:44:13 by yohasega         ###   ########.fr       */
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
	// A constructor that takes a constant integer
	Fixed(const int intVal);
	// A constructor that takes a constant floating-point number
	Fixed(const float floatVal);
	// A copy constructor
	Fixed(const Fixed &src);
	// A copy assignment operator overload
	Fixed &operator=(const Fixed &src);
	// A destructor
	~Fixed();

	// operators  <-New!!
	bool operator>(const Fixed &nm);
	bool operator<(const Fixed &nm);
	bool operator>=(const Fixed &nm);
	bool operator<=(const Fixed &nm);
	bool operator==(const Fixed &nm);
	bool operator!=(const Fixed &nm);
	Fixed operator+(const Fixed &nm);
	Fixed operator-(const Fixed &nm);
	Fixed operator*(const Fixed &nm);
	Fixed operator/(const Fixed &nm);
	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	// Functions that converts the fixed-point value
	float toFloat(void) const;
	int toInt(void) const;
	// min and max  <-New!!
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

// An overload of the insertion («) operator
std::ostream &operator<<(std::ostream &os, const Fixed &p);

#endif