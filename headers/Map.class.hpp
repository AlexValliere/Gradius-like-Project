/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 18:21:40 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 15:37:40 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CLASS_HPP
# define MAP_CLASS_HPP

# include "DebugEntity.class.hpp"

class Map : public DebugEntity {
	public:
		Map(void);
		Map(Map const & object);
		~Map();

		Map & operator=(Map const & rhs);

		void	drawMap(void);
		int		getPlayerPosX(void) const;	// Return -1 if not found
		int		getPlayerPosY(void) const;	// Return -1 if not found

		int		getContentId(int y, int x) const;
		int		getContentType(int y, int x) const;
		void	setContentId(int y, int x, int value);
		void	setContentType(int y, int x, int value);

	private:
		int		_map[25][81][2];	// _map[42][42][0] = 0 - Empty
									//					1 - PlayerShip
									//					2 - EnnemyShip1
									//					3 - EnnemyShip2
									//					4 - EnnemyShip3
									//					5 - Projectile
};

#endif