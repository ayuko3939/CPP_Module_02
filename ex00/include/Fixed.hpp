/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:26:22 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/21 18:44:26 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  private:
	int 				_val;
	static const int	_bits = 8;  // static -> all objs has _bits(8)

  public:
	// A default constructor
	Fixed();
	// A copy constructor
	Fixed(const Fixed &src);
	// A copy assignment operator overload
	Fixed	&operator=(const Fixed &src);
	// A destructor
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif