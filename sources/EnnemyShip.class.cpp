/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnnemyShip.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:37:29 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 23:12:43 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include "../headers/EnnemyShip.class.hpp"
#include "../headers/PlayerShip.class.hpp"

int			EnnemyShip::_nbr = 0;

int			randY( void ) {
	int y = rand() % 24;
	mvprintw(3, 1, "y : %d", y);
	if (y == 0 || y == 1 ) {
		return 2;
	}
	else if ( y == 24 || y == 23 ) {
		return 21;
	}
	else {
		return y;
	}
}

EnnemyShip::EnnemyShip(void) : AShip() {
	if (DebugEntity::getDebug() == true)
		std::cout << "EnnemyShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;
	
	this->setY(randY());
	this->setX(80);

	this->setActive(false);

	this->_index = _nbr + 6;
	_nbr++;

	return ;
}

// EnnemyShip::EnnemyShip( EnnemyShip const & model ) : AShip() {
// 	if (DebugEntity::getDebug() == true)
// 		std::cout << "EnnemyShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;
// 	*this = model;
// 	return ;
// }

EnnemyShip::EnnemyShip(int x, int y) : AShip(2, x, y)  {
	if (DebugEntity::getDebug() == true)
		std::cout << "EnnemyShip #" << this->_id << " created at x=" << this->_x << "; y=" << this->_y << "." << std::endl;

	return ;
}

// EnnemyShip &		EnnemyShip::operator=( EnnemyShip const & model ) {
// 	this->_x = model.getX();
// 	this->_y = model.getY();
// 	this->_active = model.getActive();
// 	return *this;
// }

EnnemyShip::~EnnemyShip() {
	if (DebugEntity::getDebug() == true)
		std::cout << "EnnemyShip #" << this->_id << " destroyed." << std::endl;

	return ;
}

bool			EnnemyShip::getActive( void ) {
	return this->_active;
}

int				EnnemyShip::getX( void ) {
	return this->_x;
}

int				EnnemyShip::getY( void ) {
	return this->_y;
}

int				EnnemyShip::getIndex( void ) {
	return this->_index;
}

void			EnnemyShip::setActive( bool active ) {
	this->_active = active;
	return ;
}			

void			EnnemyShip::setX( int x ) {
	this->_x = x;
	return ;
}		

void			EnnemyShip::setY( int y ) {
	this->_y = y;
	return ;
}		

void			EnnemyShip::setIndex( int index ) {
	this->_index = index;
	return ;
}	

void EnnemyShip::moveShip(Map & map, int const input) {
	int i = input;
	i = i;
	if (this->_x == 0){
		this->_active = false;
	}
	map.setContentType(this->getY(), this->getX(), 0);
	if (this->getX() < 0 || this->getX() > 80)
		this->setX(0);
	else
		this->setX(this->getX() - 1);
	if (map.getContentType(this->getY(), this->getX()) == 1)
		ft_gameOver();
	map.setContentType(this->getY(), this->getX(), this->getIndex());
}

