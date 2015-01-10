/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMobileEntity.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 16:12:13 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 16:18:50 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/AMobileEntity.class.hpp"

AMobileEntity::~AMobileEntity(void) {
	if (DebugEntity::getDebug() == true)
		std::cout << "AMobileEntity: Call to destructor." << std::endl;

	return;
}

void		AMobileEntity::moveOnX(int i) {
	if (DebugEntity::getDebug() == true)
		std::cout << "AMobileEntity #" << this->_id << ": moveOnX(" << i << ") -> Moving from x=" << this->_x;

	this->_x += i;

	if (DebugEntity::getDebug() == true)
		std::cout << " to x=" << this->_x <<"." << std::endl;

	return ;
}

void	AMobileEntity::moveOnY(int i) {
	if (DebugEntity::getDebug() == true)
		std::cout << "AMobileEntity #" << this->_id << ": moveOnY(" << i << ") -> Moving from y=" << this->_y;

	this->_x += i;

	if (DebugEntity::getDebug() == true)
		std::cout << " to y=" << this->_y <<"." << std::endl;

	return ;
}

int		AMobileEntity::getId(void) const {
	return this->_id;
}

int		AMobileEntity::getX(void) const {
	return this->_x;
}

int		AMobileEntity::getY(void) const {
	return this->_y;
}