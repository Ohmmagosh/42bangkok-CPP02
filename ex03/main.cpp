/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:41:14 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/25 19:54:20 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void){
	Point pA(1.0, 1.0);
	Point pB(2.0, 3.0);
	Point pC(3.0, 1.0);
	Point pI(2.0, 2.0);
	Point pO(2.0, 2.0);

	std::cout << "Inside " << bsp(pA, pB, pC, pI) << std::endl;
	std::cout << "Outside " << bsp(pA, pB, pC, pO) << std::endl;
	return (0);
}
