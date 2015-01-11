/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hades <hades@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 18:21:40 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 18:56:18 by hades            ###   ########.fr       */
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

		int		getContentType(int y, int x) const;
		void	setContentType(int y, int x, int value);

	private:
		int		_map[25][81];		// _map[42][42][0] = 0 - Empty
									// _map[42][42][0] = 5 - projectil
									// _map[42][42][0] = 5+ - ennemy
									//					
};

#endif