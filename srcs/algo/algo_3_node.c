/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:01:03 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/05 01:05:23 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	*algo_3_node(t_node	*stack_a)
{
	if (max_data_pos(stack_a) == 1)
		move_sa(&stack_a);
	if (max_data_pos(stack_a) == 2)
		move_rra(&stack_a);
	if (max_data_pos(stack_a) == 3)
	{
		if (is_stack_sorted(stack_a) == true)
			return ;
		else
			move_sa(&stack_a);
	}
	printstack(stack_a);
}
