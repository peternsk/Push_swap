/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 00:56:28 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/20 17:49:11 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	small_algo(t_stack *stack)
{
	if (stack->count_node == 1)
		return ;
	if (stack->count_node == 2)
		algo_2_node(stack);
	if (stack->count_node == 3)
		algo_3_node(stack);
	if (stack->count_node == 4 || stack->count_node == 5)
		algo_5_node(stack);
}
