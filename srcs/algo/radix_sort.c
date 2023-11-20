/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:46:44 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/20 15:57:18 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	radix_sort(t_stack *stack)
{
	t_node	*tmp;

	stack->i = -1;
	tmp = stack->a;
	stack->size = count_node(tmp);
	stack->max_bits = max_bits(&stack->a);
	while (++stack->i < stack->max_bits)
	{
		stack->j = 0;
		while (stack->j++ < stack->size)
		{
			tmp = stack->a;
			if (((tmp->index >> stack->i) & 1) == 1)
				move_ra(stack);
			else
				move_pb(stack);
		}
		while (count_node(stack->b) != 0)
			move_pa(stack);
	}
}
