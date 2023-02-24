/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:41:10 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/25 01:26:27 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed triangleArea(Point const a, Point const b, Point const c){
	return ((a.gX() * (b.gY() - c.gY()) + b.gX * (c.gY()-a.gY())+ c.gX * (a.gY() - b.gY()))/2.0);
}

//return abs((p1.x*(p2.y-p3.y) + p2.x*(p3.y-p1.y)+ p3.x*(p1.y-p2.y))/2.0);

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

}
