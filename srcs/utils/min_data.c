/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:15:53 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/21 13:15:10 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	min_data(t_node *stack)
{
	t_node	*current;
	int		min_data;

	min_data = INT_MAX;
	current = stack;
	while (current)
	{
		if (current->data < min_data)
			min_data = current->data;
		current = current->next;
	}
	return (min_data);
}
