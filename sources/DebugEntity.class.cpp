/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DebugEntity.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:34:55 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 16:18:07 by alex             ###   ########.fr       */
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

DebugEntity::~DebugEntity(void) {
	if (DebugEntity::_debug == true)
		std::cout << "DebugEntity: Call to destructor." << std::endl;

	return;
}

bool	DebugEntity::getDebug(void) {
	return DebugEntity::_debug;
}

void	DebugEntity::setDebug(bool value) {
	DebugEntity::_debug = value;
	
	std::cout << "DebugEntity set to " << value << "." << std::endl;
}