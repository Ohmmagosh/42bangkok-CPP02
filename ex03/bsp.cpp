/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:41:10 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/25 19:58:03 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	triangleArea(Point const a, Point const b, Point const c) {
	const float num = 2.0;
	return ((a.gX() * (b.gY() - c.gY()) + b.gX() * (c.gY() - a.gY()) + c.gX() * (a.gY() - b.gY())) / num);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {
	Fixed area(triangleArea(a, b, c));
	Fixed area1(triangleArea(point, a, b));
	Fixed area2(triangleArea(point, b, c));
	Fixed area3(triangleArea(point, c, a));

	Fixed all;
	all.setRawBits(area1.toFloat() + area2.toFloat() + area3.toFloat());
	std::cout << "all " << all.getRawBits() << std::endl;
	std::cout << "area " << area.getRawBits() << std::endl;
	if (area.toFloat() == all.toFloat())
		return (true);
	return (false);
}
