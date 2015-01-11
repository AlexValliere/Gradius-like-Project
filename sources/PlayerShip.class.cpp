/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerShip.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hades <hades@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:10:51 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 15:10:37 by hades            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
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

void	PlayerShip::moveShip(Map & map, int const input) {

	// if (*input == 100 || *input == 261) /* right*/
	// {
	// 	if (this->getX() > 0 && map->getContentType(this->getY(), this->getX() + 1) == 0)
	// 	{
	// 		map->setContentType(this->getY(), this->getX()n 0);
	// 		map->setContentType(this->getY(), this->getX() + 1, 1);
	// 		this->setX(this->getX() + 1);
	// 		error = 0;
	// 	}
	// }
	// else if (*input == 113 || *input == 260) /* left */
	// {
	// 	if (this->getX() > 0 && map->getContentType(this->getY(), this->getX() - 1) == 0)
	// 	{
	// 		map->setContentType(this->getY(), this->getX(), 0);
	// 		map->setContentType(this->getY(), this->getX() - 1, 1);
	// 		this->setX(this->getX() - 1);
	// 		error = 0;
	// 	}
	// }
	if (input == 115 || input == 258) /* down */
	{
		if (this->getY() < 79 && map.getContentType(this->getY() + 1, this->getX()) == 0)
		{
			map.setContentType(this->getY(), this->getX(), 0);
			map.setContentType(this->getY() + 1, this->getX(), 1);
			this->setY(this->getY() + 1);
		}
	}
	else if (input == 122 || input == 259) /* up */
	{
		if (this->getY() > 0 && map.getContentType(this->getY() - 1, this->getX()) == 0)
		{
			map.setContentType(this->getY(), this->getX(), 0);
			map.setContentType(this->getY() - 1, this->getX(), 1);
			this->setY(this->getY() - 1);
		}
	}

	return ;
}

void	PlayerShip::openFire(void) {
	Projectile	*projectile = new Projectile(this->_x + 1, this->_y);

	if (DebugEntity::getDebug() == true)
		std::cout << "PlayerShip #" << this->_id << " opened fire from x=" << this->_x << "; y=" << this->_y << " creating a projectile at x=" << projectile->getX() << "; y=" << projectile->getY() << "." << std::endl;

	return ;
}