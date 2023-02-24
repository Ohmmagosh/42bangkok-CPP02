/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:31:15 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/23 08:09:56 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _fixpoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& cp) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

Fixed& Fixed::operator=(const Fixed &cp){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &cp)
		this->setRawBits(cp.getRawBits());
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixpoint;
}

void Fixed::setRawBits( int const raw ) {
	this->_fixpoint = raw;
}

const int Fixed::_fractional_bits = 8;
