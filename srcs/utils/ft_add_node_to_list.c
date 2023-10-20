/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_to_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:49:22 by peternsaka        #+#    #+#             */
/*   Updated: 2023/10/19 22:13:47 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_add_node_to_list(char *str, t_push_utils *utils)
{
	int i;

	i = 0;
	utils->int_arr = ft_split(str, ' ');
	while(utils->int_arr[i])
	{ 
		printf("%s\n", utils->int_arr[i]);
		ft_sign_in_str(utils->int_arr[i]);
		i++;
	}
}