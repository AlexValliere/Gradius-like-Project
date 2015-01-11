/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:54:32 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 23:34:19 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_CLASS_HPP
# define PROJECTILE_CLASS_HPP

#include "AMobileEntity.class.hpp"

class Projectile : public AMobileEntity {
	public:
		Projectile();
		Projectile( Projectile const & model );
		Projectile(int active, int direction, int x, int y);
		~Projectile();

		Projectile &	operator=(Projectile const & rhs);

		int				getActive(void) const;
		int				getDirection(void) const;
		void			setActive(int value);
		void			setDirection(int value);

	protected:
		static int	_index;
		int			_id;
		int			_direction; // -1: to the left - 0: do not move - 1: to the right
		int			_active;
};

#endif