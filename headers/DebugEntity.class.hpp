/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DebugEntity.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qde-vial <qde-vial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:35:16 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 21:50:51 by qde-vial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUGENTITY_CLASS_HPP
# define DEBUGENTITY_CLASS_HPP

class DebugEntity {
	public:
		DebugEntity(void);
		DebugEntity( DebugEntity const & model );
		~DebugEntity();

		DebugEntity &	operator=( DebugEntity const & model );
		static bool	getDebug(void);
		static void	setDebug(bool value);

	protected:
		static int	_debug;

	private:
};

#endif