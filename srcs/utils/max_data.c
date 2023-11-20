/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:58:00 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 17:53:44 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	this function find the  

        #####  <=   #####  <=   #####   <=   #####   <=   #####   <=   #####   <=   #####
        # 2 #       # 1 #       # 3 #        # 9 #        # 4 #        # 5 #        # 6 #     
        #####  =>   #####  =>   #####   =>   #####   =>   #####   =>   #####   =>   #####
*/

#include "../../push_swap.h"

int	max_data(t_node *stack)
{
	t_node *current;
	int max_data;

	max_data = INT_MIN;
	current = stack;
	while (current)
	{
		if (current->data > max_data)
			max_data = current->data;
		current = current->next;
	}
	return (max_data);
}