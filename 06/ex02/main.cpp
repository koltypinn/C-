/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 23:30:17 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/09 23:32:20 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int	main()
{
	Base	*b_ptr = generate();
	identify(b_ptr);
	identify(*b_ptr);
	return (0);
}