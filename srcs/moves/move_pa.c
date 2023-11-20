/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:33:33 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 17:49:57 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	move_pa(t_stack *stack)
{
	t_node	*top_b;

	top_b = stack->b;
	if (stack->b == NULL)
		return ;
	else
		add_node_to_front(&stack->a, top_b->data, top_b->index);
	delete_node_front(&stack->b);
	printf("pa\n");
}
