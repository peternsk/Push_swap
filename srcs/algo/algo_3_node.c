/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:01:03 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/03 15:28:20 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node	*algo_3_node(t_node	*stack_a)
{

	if (max_data_pos(stack_a) == 1)
	{
		move_ra(&stack_a);
		if (is_stack_sorted(stack_a) == true)
			return(stack_a);
		else
			move_sa(stack_a);
	}
	printstack(stack_a);
	return(stack_a);
}
