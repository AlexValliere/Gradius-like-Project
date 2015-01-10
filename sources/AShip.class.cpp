/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AShip.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:55:45 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 16:59:59 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/AShip.class.hpp"

AShip::AShip(void) : AMobileEntity() {
	if (DebugEntity::getDebug() == true)
		std::cout << "AShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	AShip::_index++;

	return ;
}

AShip::AShip(int x, int y) : AMobileEntity(x,y) {
	if (DebugEntity::getDebug() == true)
		std::cout << "AShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	AShip::_index++;

	return ;
}


AShip::~AShip(void) {
	if (DebugEntity::getDebug() == true)
		std::cout << "AShip: Call to destructor." << std::endl;

	return;
}