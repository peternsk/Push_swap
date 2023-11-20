/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:00:54 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 17:51:59 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	check_dup_data(t_node *stack)
{
	t_node *tmp;
	t_node *current;

	tmp = stack;
	while (tmp->next != NULL)
	{
		current = stack;
		while (current != NULL)
		{
			if (tmp->data == current->data && tmp != current)
				return (false);
			else
				current = current->next;
		}
		tmp = tmp->next;
	}
	return (true);
}