/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 14:30:45 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 16:21:29 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/DebugEntity.class.hpp"
#include "../headers/Projectile.class.hpp"

int		Projectile::_index = 0;

Projectile::Projectile(void) : AMobileEntity(), _id(Projectile::_index), _direction(0) {
	if (DebugEntity::getDebug() == true)
		std::cout << "Projectile #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	Projectile::_index++;

	return ;
}

Projectile::Projectile(int direction, int x, int y) : AMobileEntity(3, x, y), _id(Projectile::_index), _direction(direction) {
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

Projectile & Projectile::operator=(Projectile const & rhs) {
	if (DebugEntity::getDebug() == true)
		std::cout << "Projectile & Projectile::operator=(Projectile const & rhs)." << std::endl;

	this->setDirection(rhs.getDirection());
	this->setId(rhs.getId());

	return *this;	
}

int			Projectile::getDirection(void) const {

	return this->_direction;
}

void		Projectile::setDirection(int value) {
	this->_direction = value;

	return ;
}