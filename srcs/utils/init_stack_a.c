/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:34:17 by pnsaka            #+#    #+#             */
/*   Updated: 2023/12/04 13:56:53 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node	*init_stack(int arg_c, char **arg_v, t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	if (arg_c == 2)
	{
		stack->a = create_stack(stack->a, stack->val_tab[0], -1);
		while (stack->val_tab[++i])
			add_node_to_end(stack->a, stack->val_tab[i]);
		stack->count_node = count_node(stack->a);
	}
	if (arg_c > 2)
	{
		j = 0;
		stack->a = create_stack(stack->a, stack->val_tab[j], -1);
		while (arg_v[++j])
			add_node_to_end(stack->a, stack->val_tab[j]);
		stack->count_node = count_node(stack->a);
	}
	return (stack->a);
}
