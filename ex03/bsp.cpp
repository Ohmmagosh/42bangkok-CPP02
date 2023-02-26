/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:41:10 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/26 22:11:50 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	positive( const Fixed &cp ){
	if (cp < 0)
		return cp * Fixed(-1);
	else {
		return cp;
	}
}

Fixed	triangleArea(Point const a, Point const b, Point const c) {
	return ((a.gX() * (b.gY() - c.gY()) + b.gX() * (c.gY() - a.gY()) + c.gX() * (a.gY() - b.gY())) / Fixed(2.0f));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {
	Fixed area(positive(triangleArea(a, b, c)));
	Fixed area1(positive(triangleArea(point, a, b)));
	Fixed area2(positive(triangleArea(point, b, c)));
	Fixed area3(positive(triangleArea(point, c, a)));

	if (area1 == 0 || area2 == 0 || area3 == 0)
		return (false) ;
	if (area == (area1 + area2 + area3))
		return (true) ;
	return (false) ;
}
