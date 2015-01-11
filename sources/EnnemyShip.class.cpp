/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnnemyShip.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hades <hades@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:37:29 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 15:10:15 by hades            ###   ########.fr       */
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

EnnemyShip::EnnemyShip(int x, int y) : AShip(2, x, y), _id(EnnemyShip::_index) {
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

void	EnnemyShip::openFire(void) {
	// Projectile	*projectile = new Projectile(this->_x - 1, this->_y);

	// if (DebugEntity::getDebug() == true)
	// 	std::cout << "EnnemyShip #" << this->_id << " opened fire from x=" << this->_x << "; y=" << this->_y << " creating a projectile at x=" << projectile->getX() << "; y=" << projectile->getY() << "." << std::endl;

}

void EnnemyShip::moveShip(Map & map, int const input) {
	int i = input;
	i = i;

	map = map;
}