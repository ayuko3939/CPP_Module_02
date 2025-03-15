/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:26:22 by yohasega          #+#    #+#             */
/*   Updated: 2024/11/06 11:41:46 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ======================= Default constructor ========================

Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
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

// ============================ Destructor ============================

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// ============================== Getter ==============================

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_val);
}

// ============================== Setter ==============================

void Fixed::setRawBits(int const raw)
{
	_val = raw;
}
