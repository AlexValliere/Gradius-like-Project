/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnnemyShip.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:37:36 by alex              #+#    #+#             */
/*   Updated: 2015/01/12 00:13:42 by qde-vial         ###   ########.fr       */
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
		EnnemyShip( EnnemyShip const & model );
		EnnemyShip(int x, int y);
		~EnnemyShip();

		EnnemyShip &	operator=( EnnemyShip const & model );
		void			moveShip(Map & map, int const input);
		void			activeEnnemyShip( void );

		bool			getActive( void ) const ;
		int				getX( void ) const ;
		int				getY( void ) const ;
		int				getIndex( void ) const ;

		void			setActive( bool active );
		void			setX( int x );
		void			setY( int y );
		void			setIndex( int index );



	protected:
		static int	_nbr;
		int			_index;
		int			_x;
		int			_y;
		bool		_active;
};

#endif