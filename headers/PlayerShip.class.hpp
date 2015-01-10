/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerShip.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:11:00 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 17:03:47 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYERSHIP_CLASS_HPP
# define PLAYERSHIP_CLASS_HPP

# include "AShip.class.hpp"
# include "Projectile.class.hpp"

class PlayerShip : public AShip {
	public:
		PlayerShip();
		PlayerShip(int x, int y);
		~PlayerShip();

		Projectile*	openFire(void);

	protected:
		static int	_index;
		int			_id;
};

#endif