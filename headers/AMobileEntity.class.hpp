/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMobileEntity.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 16:12:24 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 20:36:16 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMOBILEENTITY_CLASS_HPP
# define AMOBILEENTITY_CLASS_HPP

# include "DebugEntity.class.hpp"

class AMobileEntity : public DebugEntity {
	public:
		AMobileEntity();
		AMobileEntity(int type, int x, int y);
		~AMobileEntity();

		virtual void		moveOnX(int i);
		virtual void		moveOnY(int i);

		virtual int			getId(void) const;
		virtual int			getType(void) const;
		virtual int			getX(void) const;
		virtual int			getY(void) const;

		virtual void		setId(int id);
		virtual void		setType(int type);
		virtual void		setX(int x);
		virtual void		setY(int y);

	protected:
		static int	_index;
		int			_id;
		int			_type; // 0 = Space, 1 = PlayerShip, 2 = EnnemyShip, 3 = Projectile, 4 = Unknown
		int			_x;
		int			_y;
};

#endif