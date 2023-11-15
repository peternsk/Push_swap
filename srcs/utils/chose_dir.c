/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chose_dir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:47:14 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/15 13:01:54 by pnsaka           ###   ########.fr       */
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
	i = 0;
	while(tmp)
	{
		tmp->stack_pos = pos;
		if(tmp->stack_pos <= var->median)
		{
			tmp->step_top_a = 0 + i;
			printf("count with prev\n");
			printf(" %d steps needed\n", tmp->step_top_a);
			count_mov_prev(&tmp);
			++i;
		}
		else if(tmp->stack_pos > var->median)
		{
			--i;
			tmp->step_top_a = i - 0;
			printf("count with next\n");
			printf(" %d steps needed\n", tmp->step_top_a);
			count_mov_next(&tmp);
		}
		pos++;
		tmp = tmp->next;
	}
}
