/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_to_end.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:01:42 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/31 10:27:26 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node	*add_node_to_end(t_node *head, int data)
{
	t_node *tmp;
	t_node *current;

	tmp = malloc(sizeof(t_node));
	tmp->prev = NULL;
	tmp->data = data;
	tmp->next = NULL;
	current = head;
	while(current->next != NULL)
		current = current->next;
	tmp->prev = current;
	current->next = tmp;
	return(head);
}