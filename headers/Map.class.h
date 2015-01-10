/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 18:21:40 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 18:23:50 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CLASS_HPP
# define MAP_CLASS_HPP

# include "DebugEntity.class.hpp"

class Map : public DebugEntity {
	public:
		Map(void);
		Map(int height, int width);
		~Map();

};

#endif