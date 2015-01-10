/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 18:21:35 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 18:27:18 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/Map.class.h"

Map::Map(void) {
	if (DebugEntity::getDebug() == true)
		std::cout << "Map()." << std::endl;
}

Map::Map(int height, int width) {
	if (DebugEntity::getDebug() == true)
		std::cout << "Map(" << height << ", " << width << ")." << std::endl;
}

Map::~Map() {
	if (DebugEntity::getDebug() == true)
		std::cout << "~Map()." << std::endl;
}