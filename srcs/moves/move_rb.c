/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:31:59 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 17:50:08 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	move_rb(t_stack *stack)
{
	t_node	*node_2;
	t_node	*node_last;
	t_node	*current;

	if (stack->a == NULL || (stack->a)->next == NULL)
		return ;
	current = stack->a;
	node_2 = current->next;
	node_last = last_node(stack->a);
	current->next = node_2;
	stack->a = node_2;
	node_last->next = current;
	current->next = NULL;
	current->prev = node_last;
	node_2->prev = NULL;
	printf("rb\n");
}
