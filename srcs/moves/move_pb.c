/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:27:06 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/20 17:49:48 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	move_pb(t_stack *stack)
{
	t_node	*top_a;

	top_a = stack->a;
	if (!stack->b)
		stack->b = create_stack(stack->b, top_a->data, top_a->index);
	else
		add_node_to_front(&stack->b, top_a->data, top_a->index);
	delete_node_front(&stack->a);
	printf("pb\n");
}
