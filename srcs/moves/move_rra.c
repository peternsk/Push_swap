/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:46:24 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/21 13:10:59 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	move_rra(t_stack *stack)
{
	t_node	*current;
	t_node	*last;
	t_node	*before_last;

	if (stack->a == NULL || (stack->a)->next == NULL)
		return ;
	current = stack->a;
	last = last_node(stack->a);
	before_last = last->prev;
	stack->a = last;
	before_last->next = NULL;
	last->next = current;
	current->prev = last;
	last->prev = NULL;
	printf("rra\n");
}
