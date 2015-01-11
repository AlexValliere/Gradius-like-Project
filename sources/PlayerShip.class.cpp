/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerShip.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:10:51 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 17:31:40 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include "../headers/PlayerShip.class.hpp"

int		PlayerShip::_index = 0;

PlayerShip::PlayerShip(void) : AShip(), _id(PlayerShip::_index), _projectilesIndex(0) {
	if (DebugEntity::getDebug() == true)
		std::cout << "PlayerShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	PlayerShip::_index++;

	return ;
}

PlayerShip::PlayerShip(Map & map, int x, int y) : AShip(1, x, y), _id(PlayerShip::_index), _projectilesIndex(0) {
	if (DebugEntity::getDebug() == true)
		std::cout << "PlayerShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	map.setContentType(this->getY(), this->getX(), this->getType());
	map.setContentId(this->getY(), this->getX(), this->getId());

	PlayerShip::_index++;

	return ;
}

PlayerShip::~PlayerShip() {
	if (DebugEntity::getDebug() == true)
		std::cout << "PlayerShip #" << this->_id << " destroyed." << std::endl;

	return ;
}

void	PlayerShip::actionShip(Map & map, int const input) {

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
	else if (input == 32)
	{
		this->openFire(map);
	}

	return ;
}

void	PlayerShip::openFire(Map & map) {
	bool	canOpenFire = (map.getContentType(this->getY(), this->getX() + 1) == 0 ? true : false);

	if (canOpenFire)
	{
		this->_projectiles[0].setDirection(1);
		this->_projectiles[0].setX(this->getX() + 1);
		this->_projectiles[0].setX(this->getY());
		map.setContentType(this->getY(), this->getX() + 1, 5);
		map.setContentId(this->getY(), this->getX() + 1, -1);

		// if (DebugEntity::getDebug() == true)
		// {
		// 	std::cout << "PlayerShip #" << this->_id << " opened fire from x=" << this->_x << "; y=" << this->_y << " creating a projectile at x=" << this->_projectiles[this->_projectilesIndex].getX() << "; y=" << this->_projectiles[this->_projectilesIndex].getY() << "." << std::endl;
		// }
		// mvprintw(21, 1, "PlayerShip #%d opened fire from x=%d;y=%d creating a proojectile at x=%d;y=%d.", this->_id, this->_x, this->_y, this->_projectiles[this->_projectilesIndex].getX(), this->_projectiles[this->_projectilesIndex].getY());

		this->_projectilesIndex++;
	}
	// else
	// {
	// 	if (DebugEntity::getDebug() == true)
	// 		std::cout << "PlayerShip #" << this->_id << " cannot open fire from x=" << this->_x << "; y=" << this->_y << "." << std::endl;
	// }

	return ;
}

void	PlayerShip::moveProjectiles(Map & map) {
	// int	i;
	// int j;

	// if (this->_projectilesIndex >= 0)
	// {
	// 	for (i = 0; i < this->_projectilesIndex; i++)
	// 	{
			// Si le projectile est à mouvement positif sur l'axe x
			// if (this->_projectiles[i].getDirection() == 1)
			// {
				// Si le projectile est en bout de map
				// if (this->_projectiles[i].getX() >= 80 - 2)
				// {
				// 	// Détruire le projectile
				// 	for (j = i; j < this->_projectilesIndex - 1; j++)
				// 	{
				// 		this->_projectiles[j] = this->_projectiles[j + 1];
				// 	}
				// 	this->_projectiles[this->_projectilesIndex] = Projectile();
				// 	this->_projectilesIndex--;
				// 	--i;
				// }
				// else // Sinon on déplace le projectile
				// {
					map.setContentType((this->_projectiles[0]).getY(), (this->_projectiles[0]).getX(), 0);
					map.setContentId((this->_projectiles[0]).getY(), (this->_projectiles[0]).getX(), -1);

					// this->_projectiles[i].moveOnX(3);

					// map.setContentType(this->_projectiles[i].getY(), this->_projectiles[i].getX(), 5);
					// map.setContentId(this->_projectiles[i].getY(), this->_projectiles[i].getX(), this->_projectiles[i].getId());
				// }
	// 		}
	// 	}
	// }
}