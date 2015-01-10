/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:31:36 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 17:13:54 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/DebugEntity.class.hpp"
#include "../headers/EnnemyShip.class.hpp"
#include "../headers/PlayerShip.class.hpp"
#include "../headers/Projectile.class.hpp"

int		main(void)
{
	DebugEntity::setDebug(true);

	PlayerShip	playerOne(42,0);
	//PlayerShip	playerTwo(42,42);

	playerOne.moveOnX(1);
	//playerTwo.moveOnY(-1);

	playerOne.openFire();

	return 0;
}