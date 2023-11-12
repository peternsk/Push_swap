/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:01:03 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/12 00:51:24 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	algo_3_node(t_node	*stack_a)
{
	if (max_data_pos(stack_a) == 1 && is_stack_sorted(stack_a) == false)
	{
		move_sa(&stack_a);
		return;
	}
	if (max_data_pos(stack_a) == 2)
	{
		move_rra(&stack_a);
		if (is_stack_sorted(stack_a) == false)
		{
			printstack(stack_a);
			move_sa(&stack_a);
		}
		return;
	}
	if (max_data_pos(stack_a) == 3 && is_stack_sorted(stack_a) == false)
	{
		move_sa(&stack_a);
		return;
	}
	printstack(stack_a);
}
