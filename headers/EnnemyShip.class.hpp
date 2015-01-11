/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnnemyShip.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:37:36 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 15:07:10 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENNEMYSHIP_CLASS_HPP
# define ENNEMYSHIP_CLASS_HPP

# include "AShip.class.hpp"
# include "Projectile.class.hpp"

class EnnemyShip : public AShip {
	public:
		EnnemyShip( void );
		EnnemyShip(int x, int y);
		~EnnemyShip();

		void	openFire(void);

	protected:
		int			_id;
		static int	_index;
		int			_projectilesIndex;
		Projectile	_projectiles[27];
};

#endif