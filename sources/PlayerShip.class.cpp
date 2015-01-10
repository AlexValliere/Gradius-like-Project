/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerShip.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:10:51 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 21:09:15 by alex             ###   ########.fr       */
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

int		PlayerShip::moveShip(Map *map) {
	int		input = 0;
	int		error = 1;

	while (error &&
				(input != 27 /* escape */
				|| input != 100 /* z */ || input != 261 /* arrow top */
				|| input != 113 /* q */ || input != 260 /* arrow left */
				|| input != 115 /* s */ || input != 258 /* arrow down */
				|| input != 122 /* d */ || input != 259 /* arrow up */
				)
			)
	{
		input = getch();

		if (input == 27)
			error = 0;

		if (input == 100 || input == 261) /* top*/
		{
			if (this->getY() > 0 && map->getContentType(this->getY() - 1, this->getX()) == 0)
			{
				map->setContentType(0, this->getY(), this->getX());
				map->setContentType(1, this->getY() - 1, this->getX());
				this->setY(this->getY() - 1);
				error = 0;
			}
		}
		else if (input == 113 || input == 260) /* left */
		{
			if (this->getX() > 0 && map->getContentType(this->getY(), this->getX() - 1) == 0)
			{
				map->setContentType(0, this->getY(), this->getX());
				map->setContentType(1, this->getY(), this->getX() - 1);
				this->setX(this->getX() - 1);
				error = 0;
			}
		}
		else if (input == 115 || input == 258) /* down */
		{
			if (this->getY() < 79 && map->getContentType(this->getY() + 1, this->getX()) == 0)
			{
				map->setContentType(0, this->getY(), this->getX());
				map->setContentType(1, this->getY() + 1, this->getX());
				this->setY(this->getY() + 1);
				error = 0;
			}
		}
		else if (input == 122 || input == 259) /* right */
		{
			if (this->getX() > 0 && map->getContentType(this->getY(), this->getX() + 1) == 0)
			{
				map->setContentType(0, this->getY(), this->getX());
				map->setContentType(1, this->getY(), this->getX() + 1);
				this->setX(this->getX() + 1);
				error = 0;
			}
		}
	}

	return input;
}

Projectile*	PlayerShip::openFire(void) {
	Projectile	*projectile = new Projectile(this->_x + 1, this->_y);

	if (DebugEntity::getDebug() == true)
		std::cout << "PlayerShip #" << this->_id << " opened fire from x=" << this->_x << "; y=" << this->_y << " creating a projectile at x=" << projectile->getX() << "; y=" << projectile->getY() << "." << std::endl;

	return projectile;
}