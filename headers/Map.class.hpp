/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 18:21:40 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 20:35:36 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CLASS_HPP
# define MAP_CLASS_HPP

# include "DebugEntity.class.hpp"

class Map : public DebugEntity {
	public:
		Map(void);
		~Map();

		void	drawMap(void);
		int		getPlayerPosX(void) const;	// Return -1 if not found
		int		getPlayerPosY(void) const;	// Return -1 if not found

		int		getContentType(int y, int x) const;
		int		getContentId(int y, int x) const;
		void	setContentType(int y, int x, int value);
		void	setContentId(int y, int x, int value);

	private:
		int		_map[24][80][2];	// _map[42][42][0] = 0 - Empty
									//					1 - PlayerShip
									//					2 - EnnemyShip
									//					3 - Projectile
									//					4 - Unknown
									// _map[42][42][1] = Object's ID
};

#endif