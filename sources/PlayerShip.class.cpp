/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerShip.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:10:51 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 23:33:35 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include "../headers/PlayerShip.class.hpp"

int		PlayerShip::_index = 0;

void	ft_gameOver( void ) {
	clear();
	mvprintw(12, 35, "Game Over");
	refresh();
	sleep(2);
	endwin();
	exit(0);
}

PlayerShip::PlayerShip(void) : AShip(), _id(PlayerShip::_index), _projectilesIndex(0) {
	if (DebugEntity::getDebug() == true)
		std::cout << "PlayerShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	PlayerShip::_index++;

	return ;
}

PlayerShip::PlayerShip( PlayerShip const & model ) : AShip(), _id(PlayerShip::_index), _projectilesIndex(0) {
	if (DebugEntity::getDebug() == true)
		std::cout << "PlayerShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;
	*this = model;
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

// PlayerShip &		PlayerShip::operator=( PlayerShip const & model ) {
// 	this->_id = model.getId();
// 	this->_projectilesIndex = model.getProjectilesIndex();
// 	this->_projectiles = model.getProjectiles();
// 	return *this;
// }

int		PlayerShip::getProjectilesIndex( void ) {
	return this->_projectilesIndex;
}	

Projectile		*PlayerShip::getProjectiles( void ) {
	return this->_projectiles;
}	

int				PlayerShip::getId( void ) {
	return this->_id;
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
		if (this->getY() < 24)
		{
			if (map.getContentType(this->getY() + 1, this->getX()) != 0)
				ft_gameOver();

			map.setContentType(this->getY(), this->getX(), 0);
			map.setContentType(this->getY() + 1, this->getX(), 1);
			this->setY(this->getY() + 1);
		}
	}
	else if (input == 122 || input == 259) /* up */
	{
		if (this->getY() > 0) 
		{
			if (map.getContentType(this->getY() - 1, this->getX()) != 0)
				ft_gameOver();

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
		if (this->_projectilesIndex == 1000)
		{
			// Clean map from projectiles and disable projectiles
			for (int i = 0; i < 1000; i++)
			{
				map.setContentType(this->_projectiles[i].getY(), this->_projectiles[i].getX(), 0);
				map.setContentId(this->_projectiles[i].getY(), this->_projectiles[i].getX(), -1);
				this->_projectiles[i].setActive(0);
			}
			this->_projectilesIndex = 0;
		}
		else
		{
			this->_projectiles[this->_projectilesIndex].setActive(1);
			this->_projectiles[this->_projectilesIndex].setDirection(1);
			this->_projectiles[this->_projectilesIndex].setX(this->getX() + 1);
			this->_projectiles[this->_projectilesIndex].setY(this->getY());
			map.setContentType(this->getY(), this->getX() + 1, 5);
			map.setContentId(this->getY(), this->getX() + 1, -1);
			this->_projectilesIndex++;
		}

		// if (DebugEntity::getDebug() == true)
		// {
		// 	std::cout << "PlayerShip #" << this->_id << " opened fire from x=" << this->_x << "; y=" << this->_y << " creating a projectile at x=" << this->_projectiles[this->_projectilesIndex].getX() << "; y=" << this->_projectiles[this->_projectilesIndex].getY() << "." << std::endl;
		// }
		// mvprintw(21, 1, "PlayerShip #%d opened fire from x=%d;y=%d creating a proojectile at x=%d;y=%d.", this->_id, this->_x, this->_y, this->_projectiles[this->_projectilesIndex].getX(), this->_projectiles[this->_projectilesIndex].getY());
	}
	// else
	// {
	// 	if (DebugEntity::getDebug() == true)
	// 		std::cout << "PlayerShip #" << this->_id << " cannot open fire from x=" << this->_x << "; y=" << this->_y << "." << std::endl;
	// }

	return ;
}

void	PlayerShip::moveProjectiles(Map & map) {
	int	i;

	if (this->_projectilesIndex >= 0)
	{
		for (i = 0; i < this->_projectilesIndex; i++)
		{
			if (this->_projectiles[i].getActive() == 1)
			{
				map.setContentType((this->_projectiles[i]).getY(), (this->_projectiles[i]).getX(), 0);
				map.setContentId((this->_projectiles[i]).getY(), (this->_projectiles[i]).getX(), -1);

				if (this->_projectiles[i].getX() + 3 > 80)
				{
					this->_projectiles[i].setActive(0);
				}
				else
				{
					this->_projectiles[i].moveOnX(3);

					map.setContentType(this->_projectiles[i].getY(), this->_projectiles[i].getX(), 5);
					map.setContentId(this->_projectiles[i].getY(), this->_projectiles[i].getX(), this->_projectiles[i].getId());
				}
			}
		}
	}
}