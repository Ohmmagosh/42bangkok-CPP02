/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:41:14 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/26 22:13:10 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void){
	Point pA(0.0, 0.0);
	Point pB(5.0, 0.0);
	Point pC(0.0, 4.0);

	Point pI(2.0, 2.0);
	Point pO(5.0, 5.0);
	Point pE1(0.0, 1.0);
	Point pE2(5.0, 0.0);

	Fixed one(10);
	Fixed two(5);

	std::cout << "Inside " << bsp(pA, pB, pC, pI) << std::endl;
	std::cout << "Outside " << bsp(pA, pB, pC, pO) << std::endl;
	std::cout << "eage1 " <<  bsp(pA, pB, pC, pE1) << std::endl;
	std::cout << "eage2 " <<  bsp(pA, pB, pC, pE2) << std::endl;
	return (0);
}
