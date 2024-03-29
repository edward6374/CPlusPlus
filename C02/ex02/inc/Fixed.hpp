/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduchi <vduchi@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:13:04 by vduchi            #+#    #+#             */
/*   Updated: 2023/09/22 18:51:47 by vduchi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H__
#define FIXED_H__

#include <cmath>
#include <iostream>

class Fixed
{
public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &cpy);
	Fixed(const int par);
	Fixed(const float par);
	Fixed &operator=(const Fixed &cpy);
	int operator==(const Fixed &other);
	int operator!=(const Fixed &other);
	int operator>(const Fixed &other);
	int operator<(const Fixed &other);
	int operator>=(const Fixed &other);
	int operator<=(const Fixed &other);
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	static Fixed &min(Fixed &first, Fixed &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static const Fixed &min(const Fixed &first, const Fixed &second);
	static const Fixed &max(const Fixed &first, const Fixed &second);

	int getRawBits(void) const;
	int getFractBits(void) const;
	void setRawBits(int const raw);

	int toInt(void) const;
	float toFloat(void) const;

private:
	int _value;
	const static int _bits = 8;
};

std::ostream &operator<<(std::ostream &s, const Fixed &cpy);

#endif
