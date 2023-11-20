/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_to_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:57:48 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/20 17:51:48 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	add_node_to_front(t_node **stack, int data, int index)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	new_node->prev = NULL;
	new_node->data = data;
	new_node->index = index;
	new_node->next = *stack;
	*stack = new_node;
}
