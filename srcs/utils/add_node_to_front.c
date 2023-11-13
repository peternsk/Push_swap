/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_to_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:57:48 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/13 16:02:28 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void 	add_node_to_front(t_node *stack, int data)
{
	t_node *current;
	t_node *tmp;

	tmp = malloc(sizeof(t_node));
	tmp->prev = NULL;
	tmp->data = data;
	tmp->next = NULL;
	current = stack;
	tmp->next = current;
	current->prev = tmp;
	stack = tmp;
}
