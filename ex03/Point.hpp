/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:41:25 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/25 19:49:40 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point( void );
		Point( const Point& cp);
		Point( const float x, const float y);
		Point& operator=( const Point &cp);
		Fixed	gX( void ) const;
		Fixed	gY( void ) const;
		~Point();
};

Fixed	triangleArea( Point const a, Point const b, Point const c );
bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
