/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 18:21:40 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 20:04:12 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CLASS_HPP
# define MAP_CLASS_HPP

# include "DebugEntity.class.hpp"

class Map : public DebugEntity {
	public:
		Map(void);
		~Map();

		int		getContentType(int y, int x) const;
		int		getContentId(int y, int x) const;

	private:
		int		_map[24][80][2];	// _map[42][42][0] = 0 - Empty
									//					1 - PlayerShip
									//					2 - EnnemyShip
									//					3 - Projectile
									// _map[42][42][1] = Object's ID
};

#endif