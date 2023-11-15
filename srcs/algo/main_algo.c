/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:46:44 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/14 23:15:30 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	main_algo(t_stack *stack)
{
	(void)stack;
	while (count_node(stack->a) != 3)
		move_pb(stack);
	algo_3_node(stack);
	node_pos(stack->b);
	stack->median = (count_node(stack->b) / 2);
	count_move(stack->b, stack);
	// printf("median %d\n", stack->median);
	// printf("--- STACK A ---\n");
	// printstack(stack->a);
	// printf("--- STACK B ---\n");
	// printstack(stack->b);
}