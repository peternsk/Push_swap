/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 00:56:28 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/11 13:34:12 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	small_algo(t_node *stack_a, t_node *stack_b, t_push_utils *var)
{
	(void)stack_b;
	if (var->count_node == 1)
		return ;
	if (var->count_node == 2)
		algo_2_node(stack_a);
	if (var->count_node == 3)
        algo_3_node(stack_a);
	if (var->count_node > 3 && var->count_node <= 5)
		algo_5_node(stack_a, stack_b);
	printstack(stack_a);
}
