/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:01:06 by peternsaka        #+#    #+#             */
/*   Updated: 2023/10/19 21:36:26 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_push_utils	*create_push_utils(char *str)
{
	(void)str;
	t_push_utils	*utils;

	utils = malloc(1 * sizeof(t_push_utils));
	if (!utils)
		return (NULL);
	utils->int_arr = 0;
	
	return (utils);
}