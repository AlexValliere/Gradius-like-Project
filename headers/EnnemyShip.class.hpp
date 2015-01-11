/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnnemyShip.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hades <hades@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:37:36 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 17:04:47 by hades            ###   ########.fr       */
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

		void			moveShip(Map & map, int const input);
		void			activeEnnemyShip( void );

		bool			getActive( void );
		int				getX( void );
		int				getY( void );
		int				getIndex( void );
		void			setActive( bool active );
		void			setX( int x );
		void			setY( int y );
		void			setIndex( int index );



	protected:
		static int	_nbr;
		int			_index;
		int			_x;
		int			_y;
		int			_projectilesIndex;
		Projectile	_projectiles[27];
		bool		_active;
};

#endif