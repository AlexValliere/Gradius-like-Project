/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnnemyShip.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:37:29 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 17:12:16 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/EnnemyShip.class.hpp"

int		EnnemyShip::_index = 0;

EnnemyShip::EnnemyShip(void) : AShip(), _id(EnnemyShip::_index) {
	if (DebugEntity::getDebug() == true)
		std::cout << "EnnemyShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	EnnemyShip::_index++;

	return ;
}

EnnemyShip::EnnemyShip(int x, int y) : AShip(x, y), _id(EnnemyShip::_index) {
	if (DebugEntity::getDebug() == true)
		std::cout << "EnnemyShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	EnnemyShip::_index++;

	return ;
}

EnnemyShip::~EnnemyShip() {
	if (DebugEntity::getDebug() == true)
		std::cout << "EnnemyShip #" << this->_id << " destroyed." << std::endl;

	return ;
}

Projectile*	EnnemyShip::openFire(void) {
	Projectile	*projectile = new Projectile(this->_x - 1, this->_y);

	if (DebugEntity::getDebug() == true)
		std::cout << "EnnemyShip #" << this->_id << " opened fire from x=" << this->_x << "; y=" << this->_y << " creating a projectile at x=" << projectile->getX() << "; y=" << projectile->getY() << "." << std::endl;

	return projectile;
}