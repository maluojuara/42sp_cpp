/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:19:24 by malcosta          #+#    #+#             */
/*   Updated: 2026/10/12 17:00:45 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class	Fixed
{
	private:
		int		fixed_point;
		static int const	fractional_bits = 8;
	
	public:
		Fixed();
		Fixed (Fixed const &number);
};

#endif
