/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:54:32 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 17:04:01 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_CLASS_HPP
# define PROJECTILE_CLASS_HPP

#include "AMobileEntity.class.hpp"

class Projectile : public AMobileEntity {
	public:
		Projectile();
		Projectile(int x, int y);
		~Projectile();

	protected:
		static int	_index;
};

#endif