/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMobileEntity.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 16:12:13 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 20:36:43 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/AMobileEntity.class.hpp"

int		AMobileEntity::_index = 0;

AMobileEntity::AMobileEntity(void) : _id(AMobileEntity::_index++), _type(4), _x(0), _y(0) {
	if (DebugEntity::getDebug() == true)
		std::cout << "#" << this->_id << " - AMobileEntity()." << std::endl;

	return ;
}

AMobileEntity::AMobileEntity(int type, int x, int y) : _id(AMobileEntity::_index), _type(type), _x(x), _y(y) {
	if (DebugEntity::getDebug() == true)
		std::cout << "#" << this->_id << " - AMobileEntity(" << x << ", " << y << ")." << std::endl;

	return ;
}


AMobileEntity::~AMobileEntity(void) {
	if (DebugEntity::getDebug() == true)
		std::cout << "#" << this->_id << " - ~AMobileEntity()." << std::endl;

	return;
}

void		AMobileEntity::moveOnX(int i) {
	if (DebugEntity::getDebug() == true)
		std::cout << "#" << this->_id << " - AMobileEntity::moveOnX(" << i << ") - Moving from x=" << this->_x;

	this->_x += i;

	if (DebugEntity::getDebug() == true)
		std::cout << " to x=" << this->_x <<"." << std::endl;

	return ;
}

void	AMobileEntity::moveOnY(int i) {
	if (DebugEntity::getDebug() == true)
		std::cout << "#" << this->_id << " - AMobileEntity::moveOnY(" << i << ") - Moving from y=" << this->_y;

	this->_y += i;

	if (DebugEntity::getDebug() == true)
		std::cout << " to y=" << this->_y <<"." << std::endl;

	return ;
}

int		AMobileEntity::getId(void) const {
	return this->_id;
}

int		AMobileEntity::getType(void) const {
	return this->_type;
}

int		AMobileEntity::getX(void) const {
	return this->_x;
}

int		AMobileEntity::getY(void) const {
	return this->_y;
}

void	AMobileEntity::setId(int id) {
	this->_id = id;

	return ;
}

void	AMobileEntity::setType(int type) {
	this->_type = type;

	return ;
}

void	AMobileEntity::setX(int x) {
	this->_x = x;

	return ;
}

void	AMobileEntity::setY(int y) {
	this->_y = y;

	return ;
}