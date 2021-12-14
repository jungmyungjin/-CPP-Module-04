/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:34:09 by mjung             #+#    #+#             */
/*   Updated: 2021/12/14 18:34:11 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	// OCCP
public:
	Brain();
	virtual ~Brain();
	Brain(const Brain &target);
	Brain& operator=(const Brain &target);

	std::string ideas[100];
};

#endif


