/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnnemyShip.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hades <hades@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:37:36 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 15:18:01 by hades            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENNEMYSHIP_CLASS_HPP
# define ENNEMYSHIP_CLASS_HPP

# include "AShip.class.hpp"
# include "Projectile.class.hpp"
# include "Map.class.hpp"

class EnnemyShip : public AShip {
	public:
		EnnemyShip( void );
		EnnemyShip(int x, int y);
		~EnnemyShip();

		virtual void	openFire(void);
		virtual void	moveShip(Map & map, int const input);

	protected:
		int			_id;
		static int	_index;
		int			_projectilesIndex;
		Projectile	_projectiles[27];
};

#endif