/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AShip.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:46:02 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 16:15:18 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_CLASS_HPP
# define SHIP_CLASS_HPP

# include "AMobileEntity.class.hpp"
# include "Projectile.class.hpp"

class AShip : public AMobileEntity {
	public:
		~AShip();

		virtual Projectile*	openFire(void) = 0;

	protected:
		static int	_index;
		int			_id;
		int			_x;
		int			_y;
};

#endif