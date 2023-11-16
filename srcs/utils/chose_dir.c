/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chose_dir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:47:14 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/16 12:46:21 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void		chose_dir(t_node **stack, t_stack *var)
{
	t_node *tmp;
	int pos;
	int i;

	tmp = *stack;
	pos = 0;
	i = 1;
	while(tmp)
	{
		tmp->stack_pos = pos;
		if(tmp->stack_pos <= var->median)
		{
			tmp->step_top_b = 0 + i;
			tmp->step_top_a = goal_pos(&var->a, tmp->data);
			printf("\n");
			printf("--- NODE ---\n");
			printf("count with prev\n");
			printf(" %d steps needed in B\n", tmp->step_top_b);
			count_mov_prev(&tmp);
			printf("-------> %d DATA %d steps needed in A\n", tmp->data, tmp->step_top_a);
			i++;
		}
		else if(tmp->stack_pos > var->median)
		{
			--i;
			tmp->step_top_b = (i - 0) - 1;
			tmp->step_top_a = goal_pos(&var->a, tmp->data);
			printf("\n");
			printf("--- NODE ---\n");
			printf("count with next\n");
			printf(" %d steps needed in B\n", tmp->step_top_b);
			count_mov_next(&tmp);
			printf("-------> %d DATA %d steps needed in A\n", tmp->data, tmp->step_top_a);
		}
		pos++;
		tmp = tmp->next;
	}
}
