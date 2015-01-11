/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:54:32 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 16:20:45 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_CLASS_HPP
# define PROJECTILE_CLASS_HPP

#include "AMobileEntity.class.hpp"

class Projectile : public AMobileEntity {
	public:
		Projectile();
		Projectile(int direction, int x, int y);
		~Projectile();

		Projectile &	operator=(Projectile const & rhs);

		int				getDirection(void) const;
		void			setDirection(int value);

	protected:
		static int	_index;
		int			_id;
		int			_direction; // -1: to the left - 0: do not move - 1: to the right
};

#endif