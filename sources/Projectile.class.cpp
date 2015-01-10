/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 14:30:45 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 16:19:13 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/DebugEntity.class.hpp"
#include "../headers/Projectile.class.hpp"

int		Projectile::_index = 0;

Projectile::Projectile(void) : _id(Projectile::_index), _x(0), _y(0) {
	if (DebugEntity::getDebug() == true)
		std::cout << "Projectile #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	Projectile::_index++;

	return ;
}

Projectile::Projectile(int x, int y) : _id(Projectile::_index), _x(x), _y(y) {
	if (DebugEntity::getDebug() == true)
		std::cout << "Projectile #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	Projectile::_index++;

	return ;
}

Projectile::~Projectile() {
	if (DebugEntity::getDebug() == true)
		std::cout << "Projectile #" << this->_id << " destroyed." << std::endl;

	return ;
}