/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMobileEntity.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 16:12:24 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 16:14:30 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMOBILEENTITY_CLASS_HPP
# define AMOBILEENTITY_CLASS_HPP

# include "DebugEntity.class.hpp"

class AMobileEntity : public DebugEntity {
	public:
		~AMobileEntity();

		virtual void		moveOnX(int i);
		virtual void		moveOnY(int i);

		virtual int			getId(void) const;
		virtual int			getX(void) const;
		virtual int			getY(void) const;

	protected:
		static int	_index;
		int			_id;
		int			_x;
		int			_y;
};

#endif