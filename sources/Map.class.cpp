/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 18:21:35 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 20:26:26 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include "../headers/Map.class.hpp"

Map::Map(void) {
	if (DebugEntity::getDebug() == true)
		std::cout << "Map()." << std::endl;

	int	x, y;
	int	maxX = 80, maxY = 24;

	for (y = 0; y < maxY; y++)
	{
		for (x = 0; x < maxX; x++)
		{
			this->setContentType(y, x, 0);
			this->setContentId(y, x, -1);
		}
	}
}

// Map::Map(int height, int width) {
// 	if (DebugEntity::getDebug() == true)
// 		std::cout << "Map(" << height << ", " << width << ")." << std::endl;
// }

Map::~Map() {
	if (DebugEntity::getDebug() == true)
		std::cout << "~Map()." << std::endl;
}

void	Map::drawMap(void) {
	int	x, y;
	int	maxX = 80, maxY = 24;

	for (y = 0; y < maxY; y++)
	{
		for (x = 0; x < maxX; x++)
		{
			move(y, x);
			if (this->getContentType(y, x) != 0)
				printw(">");
			else
				printw(".");
		}
	}
}

int		Map::getPlayerPosX(void) const {
	int	x, y;
	int	maxX = 80, maxY = 24;

	for (y = 0; y < maxY; y++)
	{
		for (x = 0; x < maxX; x++)
		{
			if (this->getContentType(y, x) == 1) // Type 1 = playerShip
				return x;
		}
	}

	return -1; // Player not found
}

int		Map::getPlayerPosY(void) const {
	int	x, y;
	int	maxX = 80, maxY = 24;

	for (y = 0; y < maxY; y++)
	{
		for (x = 0; x < maxX; x++)
		{
			if (this->getContentType(y, x) == 1) // Type 1 = playerShip
				return y;
		}
	}

	return -1; // Player not found
}


int		Map::getContentType(int y, int x) const {
	return this->_map[y][x][0];
}

int		Map::getContentId(int y, int x) const {
	return this->_map[y][x][1];
}

void	Map::setContentType(int y, int x, int value) {
	this->_map[y][x][0] = value;

	return ;
}

void	Map::setContentId(int y, int x, int value) {
	this->_map[y][x][1] = value;

	return ;
}
