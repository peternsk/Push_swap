/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 00:56:28 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/03 15:44:40 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node	*small_algo(t_node *stack_a, t_node *stack_b, t_push_utils *var)
{
	(void)stack_b;
	if (var->count_node == 1)
		return (stack_a);
	if (var->count_node == 2)
		algo_2_node(stack_a);
	if (var->count_node == 3)
        algo_3_node(stack_a);
	if (var->count_node > 3 && var->count_node <= 5)
	{
		printf("max data --> %d\n", max_data(stack_a));
		printf("max position --> %d\n", max_data_pos(stack_a));
		move_ra(&stack_a);
		printstack(stack_a);
		printf("algo de 5\n");
	}
	printstack(stack_a);
	return (stack_a);
}
