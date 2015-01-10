/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DebugEntity.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:35:16 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 16:17:39 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUGENTITY_CLASS_HPP
# define DEBUGENTITY_CLASS_HPP

class DebugEntity {
	public:
		DebugEntity(void);
		~DebugEntity();

		static bool	getDebug(void);
		static void	setDebug(bool value);

	protected:
		static int	_debug;

	private:
};

#endif