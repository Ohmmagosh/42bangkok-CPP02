/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:36:29 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/26 22:16:29 by psuanpro         ###   ########.fr       */
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

Fixed::Fixed( const int fixpoint ): _fixpoint(fixpoint << _fractional_bits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fixpoint): _fixpoint(roundf(fixpoint * (1 << _fractional_bits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& cp){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &cp)
		this->setRawBits(cp.getRawBits());
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed	Fixed::operator+(const Fixed &cp) const{
	Fixed ret(this->toFloat() + cp.toFloat());
	return ret;
}

Fixed	Fixed::operator-(const Fixed &cp) const{
	Fixed ret(this->toFloat() - cp.toFloat());
	return ret;
}

Fixed	Fixed::operator*(const Fixed &cp) const{
	Fixed ret(this->toFloat() * cp.toFloat());
	return this->toFloat() * cp.toFloat();
}

Fixed	Fixed::operator/(const Fixed &cp) const{
	Fixed ret(this->toFloat() / cp.toFloat());
	return ret;
}

bool	Fixed::operator<(const Fixed &cp) const{
	return this->toFloat() < cp.toFloat();
}

bool	Fixed::operator>(const Fixed &cp) const{
	return this->toFloat() > cp.toFloat();
}

bool	Fixed::operator>=(const Fixed &cp) const{
	return this->toFloat() >= cp.toFloat();
}

bool	Fixed::operator<=(const Fixed &cp) const{
	return this->toFloat() <= cp.toFloat();
}

bool	Fixed::operator==(const Fixed &cp) const{
	return this->toFloat() == cp.toFloat();
}

bool	Fixed::operator!=(const Fixed &cp) const{
	return this->toFloat() != cp.toFloat();
}

const Fixed&	Fixed::max( const Fixed &a, const Fixed &b){
	return a >= b ? a : b;
}

const Fixed&	Fixed::min( const Fixed &a, const Fixed &b){
	return a <= b ? a : b;
}

Fixed&	Fixed::max( Fixed &a, Fixed &b){
	return a >= b ? a : b;
}

Fixed&	Fixed::min( Fixed &a, Fixed &b){
	return a <= b ? a : b;
}

Fixed&	Fixed::operator++( void ){
	++this->_fixpoint;
	return *this;
}

Fixed&	Fixed::operator--( void ){
	--this->_fixpoint;
	return *this;
}

Fixed Fixed::operator--( int ) {
	Fixed	tmp(*this);
	--this->_fixpoint;
	return (tmp);
}

Fixed Fixed::operator++( int ) {
	Fixed	tmp(*this);
	++this->_fixpoint;
	return (tmp);
}

int	Fixed::getRawBits( void ) const {
	return this->_fixpoint;
}

void Fixed::setRawBits( int const raw ) {
	this->_fixpoint = raw;
}

int	Fixed::toInt( void ) const {
	return (this->getRawBits() >> _fractional_bits);
}

float	Fixed::toFloat(void) const {
	return ((this->_fixpoint) /  ((float)( 1 << _fractional_bits)));
}

std::ostream& operator<<(std::ostream& stream, const Fixed& cp)
{
	stream << cp.toFloat();
	return (stream);
}

const int	Fixed::_fractional_bits = 8;

