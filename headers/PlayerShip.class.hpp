/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerShip.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hades <hades@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:11:00 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 14:59:55 by hades            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYERSHIP_CLASS_HPP
# define PLAYERSHIP_CLASS_HPP

# include "AShip.class.hpp"
# include "Projectile.class.hpp"
# include "Map.class.hpp"

class PlayerShip : public AShip {
	public:
		PlayerShip();
		PlayerShip(int x, int y);
		~PlayerShip();

		virtual void	moveShip(Map & map, int const input);

		void			openFire(void);

	protected:
		static int	_index;
		static int	_projectilesIndex;
		int			_id;
		Projectile	projectiles[27];
};

#endif