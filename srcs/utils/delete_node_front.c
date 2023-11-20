/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_node_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:28:51 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/20 17:52:33 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	delete_node_front(t_node **stack)
{
	t_node	*next;

	next = *stack;
	*stack = (*stack)->next;
	if (*stack)
		(*stack)->prev = NULL;
	free(next);
}
