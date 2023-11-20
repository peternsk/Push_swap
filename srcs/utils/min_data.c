/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:15:53 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 17:53:54 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	this function find the  

        #####  <=   #####  <=   #####   <=   #####   <=   #####   <=   #####   <=   #####
        # 2 #       # 1 #       # 3 #        # 9 #        # 4 #        # 5 #        # 6 #     
        #####  =>   #####  =>   #####   =>   #####   =>   #####   =>   #####   =>   #####
*/

#include "../../push_swap.h"

int	min_data(t_node *stack)
{
	t_node *current;
	int min_data;

	min_data = INT_MAX;
	current = stack;
	while (current)
	{
		if (current->data < min_data)
			min_data = current->data;
		current = current->next;
	}
	return (min_data);
}