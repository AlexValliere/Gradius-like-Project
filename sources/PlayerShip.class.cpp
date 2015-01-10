/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerShip.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:10:51 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 20:34:21 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/PlayerShip.class.hpp"

int		PlayerShip::_index = 0;

PlayerShip::PlayerShip(void) : AShip(), _id(PlayerShip::_index) {
	if (DebugEntity::getDebug() == true)
		std::cout << "PlayerShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	PlayerShip::_index++;

	return ;
}

PlayerShip::PlayerShip(int x, int y) : AShip(1, x, y), _id(PlayerShip::_index) {
	if (DebugEntity::getDebug() == true)
		std::cout << "PlayerShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	PlayerShip::_index++;

	return ;
}

PlayerShip::~PlayerShip() {
	if (DebugEntity::getDebug() == true)
		std::cout << "PlayerShip #" << this->_id << " destroyed." << std::endl;

	return ;
}

Projectile*	PlayerShip::openFire(void) {
	Projectile	*projectile = new Projectile(this->_x + 1, this->_y);

	if (DebugEntity::getDebug() == true)
		std::cout << "PlayerShip #" << this->_id << " opened fire from x=" << this->_x << "; y=" << this->_y << " creating a projectile at x=" << projectile->getX() << "; y=" << projectile->getY() << "." << std::endl;

	return projectile;
}