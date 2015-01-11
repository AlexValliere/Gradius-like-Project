/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AShip.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:46:02 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 15:24:16 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_CLASS_HPP
# define SHIP_CLASS_HPP

# include "AMobileEntity.class.hpp"
# include "Projectile.class.hpp"

class AShip : public AMobileEntity {
	public:
		AShip();
		AShip(int type, int x, int y);
		~AShip();

		// virtual void	openFire(void) = 0;
};

#endif