/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AShip.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hades <hades@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:46:02 by alex              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/01/11 15:24:16 by alex             ###   ########.fr       */
=======
/*   Updated: 2015/01/11 15:27:29 by hades            ###   ########.fr       */
>>>>>>> 1baf50a5662a7e23589229a272a0d8e4a731e39f
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

<<<<<<< HEAD
		// virtual void	openFire(void) = 0;
=======
>>>>>>> 1baf50a5662a7e23589229a272a0d8e4a731e39f
};

#endif