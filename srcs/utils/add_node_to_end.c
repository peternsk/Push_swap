/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_to_end.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:01:42 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/29 09:28:36 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	add_node_to_end(t_node *head, int data)
{
	t_node	*tmp;
	t_node	*current;

	if (data < 2147483647 && data > -2147483648)
	{
		tmp = malloc(sizeof(t_node));
		if (!tmp)
			return ;
		tmp->prev = NULL;
		tmp->data = data;
		tmp->index = -1;
		tmp->next = NULL;
		current = head;
		while (current->next != NULL)
			current = current->next;
		tmp->prev = current;
		current->next = tmp;
	}
	else
		return ;
}
