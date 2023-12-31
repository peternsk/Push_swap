/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rrb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:18:46 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/20 17:50:34 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	move_rrb(t_node **stack_b)
{
	t_node	*current;
	t_node	*last;
	t_node	*before_last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	current = *stack_b;
	last = last_node(*stack_b);
	before_last = last->prev;
	*stack_b = last;
	before_last->next = NULL;
	last->next = current;
	current->prev = last;
	last->prev = NULL;
	printf("rrb\n");
}
