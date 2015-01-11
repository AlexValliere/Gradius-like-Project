/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerShip.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:11:00 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 22:31:37 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYERSHIP_CLASS_HPP
# define PLAYERSHIP_CLASS_HPP

# include "EnnemyShip.class.hpp"
# include "AShip.class.hpp"
# include "Projectile.class.hpp"
# include "Map.class.hpp"

class PlayerShip : public AShip {
	public:
		PlayerShip();
		PlayerShip(Map & map, int x, int y);
		~PlayerShip();

		void		actionShip(Map & map, int const input);
		void		openFire(Map & map);

		void		moveProjectiles(Map & map, EnnemyShip (&ships)[1000]);

	protected:
		int			_id;
		static int	_index;
		int			_projectilesIndex;
		Projectile	_projectiles[1000];
};

void	ft_gameOver( void );

#endif