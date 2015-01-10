/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 18:21:35 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 20:06:04 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/Map.class.hpp"

Map::Map(void) {
	if (DebugEntity::getDebug() == true)
		std::cout << "Map()." << std::endl;
}

// Map::Map(int height, int width) {
// 	if (DebugEntity::getDebug() == true)
// 		std::cout << "Map(" << height << ", " << width << ")." << std::endl;
// }

Map::~Map() {
	if (DebugEntity::getDebug() == true)
		std::cout << "~Map()." << std::endl;
}

int		Map::getContentType(int y, int x) const {
	return this->_map[y][x][0];
}

int		Map::getContentId(int y, int x) const {
	return this->_map[y][x][1];
}
