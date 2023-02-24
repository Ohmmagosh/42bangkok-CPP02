/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:31:13 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/23 08:07:43 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int					_fixpoint;
		static const int	_fractional_bits;
	public:
		Fixed( void );
		Fixed( const Fixed& cp );
		~Fixed();
		Fixed& operator=(const Fixed &cp);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
#endif

