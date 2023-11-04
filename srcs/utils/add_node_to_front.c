/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_to_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:57:48 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/03 21:20:46 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node	*add_node_to_front(t_node **head, int data)
{
	t_node *current;
	t_node *tmp;

	tmp = malloc(sizeof(t_node));
	tmp->prev = NULL;
	tmp->data = data;
	tmp->next = NULL;
	current = *head;
	tmp->next = current;
	current->prev = tmp;
	*head = tmp;
	return(*head);
}
