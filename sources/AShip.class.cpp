/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AShip.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:55:45 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 21:50:02 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/AShip.class.hpp"

AShip::AShip(void) : AMobileEntity() {
	if (DebugEntity::getDebug() == true)
		std::cout << "AShip::AMobileEntity()." << std::endl;

	return ;
}

AShip::AShip( AShip const & model ) : AMobileEntity() {
	if (DebugEntity::getDebug() == true)
		std::cout << "AShip::AMobileEntity()." << std::endl;
	*this = model;
	return ;
}

AShip::AShip(int type, int x, int y) : AMobileEntity(type, x,y) {
	if (DebugEntity::getDebug() == true)
		std::cout << "AShip::AMobileEntity(" << x << ", " << y << ")." << std::endl;

	return ;
}

AShip &			AShip::operator=( AShip const & model ) {
	(void)model;
	return *this;
}

AShip::~AShip(void) {
	if (DebugEntity::getDebug() == true)
		std::cout << "~AShip()." << std::endl;

	return;
}