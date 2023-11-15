/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:47:14 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/14 23:22:18 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void		count_move(t_node *stack, t_stack *var)
{
	t_node *tmp;

	tmp = stack;
	while(tmp->next != NULL)
	{
		if(tmp->stack_pos <= var->median)
			printf(" %d count with prev\n", tmp->stack_pos);
		if(tmp->stack_pos > var->median)
			printf(" %d count with next\n", tmp->stack_pos);
		tmp = tmp->next;
	}
}