/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:36:32 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/26 21:51:57 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int						_fixpoint;
		static const int		_fractional_bits;
	public:
		Fixed( void );
		Fixed( const Fixed& cp );
		Fixed( const int fixpoint );
		Fixed( const float fixpoint );
		Fixed& operator=( const Fixed &cp );
		~Fixed();

		Fixed	operator+( const Fixed &cp ) const;
		Fixed	operator-( const Fixed &cp ) const;
		Fixed	operator*( const Fixed &cp ) const;
		Fixed	operator/( const Fixed &cp ) const;

		bool	operator<( const Fixed &cp ) const;
		bool	operator>( const Fixed &cp ) const;
		bool	operator>=( const Fixed &cp ) const;
		bool	operator<=( const Fixed &cp ) const;
		bool	operator==( const Fixed &cp ) const;
		bool	operator!=( const Fixed &cp ) const;

		Fixed&	operator++( void ) ;
		Fixed	operator++( int ) ;
		Fixed&	operator--( void ) ;
		Fixed	operator--( int ) ;

		static const Fixed&	max( const Fixed &a, const Fixed &b );
		static const Fixed&	min( const Fixed &a, const Fixed &b );
		static Fixed&	max( Fixed &a, Fixed &b );
		static Fixed&	min( Fixed &a, Fixed &b );

		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& stream, const Fixed& cp);

#endif
