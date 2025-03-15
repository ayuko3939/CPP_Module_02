/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:26:22 by yohasega          #+#    #+#             */
/*   Updated: 2024/11/06 11:41:22 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ======================= Default constructor ========================

Fixed::Fixed() : _val(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

// ======================= Constructor overload ========================

Fixed::Fixed(const int intVal)
: _val(intVal << _bits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatVal)
: _val(roundf(floatVal * (1 << _bits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

// ========================= Copy constructor =========================

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	_val = src._val;
}

// ============== Copy assignment operator overload ===================

Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(src.getRawBits());
	return (*this);
}

// ============================ Operators =============================

bool Fixed::operator>(const Fixed &nm)
{
	return (_val > nm.getRawBits());
}

bool Fixed::operator<(const Fixed &nm)
{
	return (_val < nm.getRawBits());
}

bool Fixed::operator>=(const Fixed &nm)
{
	return (_val >= nm.getRawBits());
}

bool Fixed::operator<=(const Fixed &nm)
{
	return (_val <= nm.getRawBits());
}

bool Fixed::operator==(const Fixed &nm)
{
	return (_val == nm.getRawBits());
}

bool Fixed::operator!=(const Fixed &nm)
{
	return (_val != nm.getRawBits());
}

Fixed Fixed::operator+(const Fixed &nm)
{
	return (Fixed(toFloat() + nm.toFloat()));
}

Fixed Fixed::operator-(const Fixed &nm)
{
	return (Fixed(toFloat() - nm.toFloat()));
}

Fixed Fixed::operator*(const Fixed &nm)
{
	return (Fixed(toFloat() * nm.toFloat()));
}

Fixed Fixed::operator/(const Fixed &nm)
{
	return (Fixed(toFloat() / nm.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	_val += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed ans(this->_val * toFloat());
	this->_val += 1;
	return (ans);
}

Fixed &Fixed::operator--(void)
{
	_val -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed ans(this->_val * toFloat());
	this->_val -= 1;
	return (ans);
}


// ============================ Destructor ============================

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}


// ============================== Getter ==============================

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_val);
}

// ============================== Setter ==============================

void Fixed::setRawBits(int const raw)
{
	_val = raw;
}

// ========================== public function =========================

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_val) / static_cast<float>(1 << _bits));
}

int Fixed::toInt(void) const
{
	return (_val >> _bits);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

// ============================== function ============================

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return (stream);
}
