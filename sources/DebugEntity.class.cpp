/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DebugEntity.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:34:55 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 21:52:37 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/DebugEntity.class.hpp"

int		DebugEntity::_debug = false;

DebugEntity::DebugEntity(void) {
	if (DebugEntity::_debug == true)
		std::cout << "DebugEntity: Call to default constructor." << std::endl;

	return;
}

DebugEntity::DebugEntity( DebugEntity const & model ) {
	if (DebugEntity::_debug == true)
		std::cout << "DebugEntity: Call to default constructor." << std::endl;
	*this = model;
	return ;
}

DebugEntity::~DebugEntity(void) {
	if (DebugEntity::_debug == true)
		std::cout << "DebugEntity: Call to destructor." << std::endl;

	return;
}

DebugEntity &		DebugEntity::operator=( DebugEntity const & model ) {
	this->_debug = model.getDebug();
	return *this;
}

bool	DebugEntity::getDebug(void) {
	return DebugEntity::_debug;
}

void	DebugEntity::setDebug(bool value) {
	DebugEntity::_debug = value;
	
	std::cout << "DebugEntity set to " << value << "." << std::endl;
}