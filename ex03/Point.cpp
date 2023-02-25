/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:41:23 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/25 01:46:00 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0){}

Point::Point(const Point& cp): x(cp.x), y(cp.y){}

Point::Point(const float x, const float y): x(x), y(y){}

Point&	Point::operator=(const Point &cp){
	if (this != &cp){}
	return (*this);
}

Fixed	Point::gX( void ) const{
	return x;
}

Fixed	Point::gY( void ) const{
	return y;
}

Point::~Point(){}
