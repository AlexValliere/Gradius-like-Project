/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AShip.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:55:45 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 16:18:25 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/AShip.class.hpp"

AShip::~AShip(void) {
	if (DebugEntity::getDebug() == true)
		std::cout << "AShip: Call to destructor." << std::endl;

	return;
}