/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:46:44 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/16 12:27:57 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	main_algo(t_stack *stack)
{
	while (count_node(stack->a) != 3)
		move_pb(stack);
	algo_3_node(stack);
	stack->median = (count_node(stack->b) / 2);
	printf("median %d\n", stack->median);
	chose_dir(&stack->b, stack);
	printf("--- STACK A ---\n");
	printstack(stack->a);
	printf("--- STACK B ---\n");
	printstack(stack->b);
}