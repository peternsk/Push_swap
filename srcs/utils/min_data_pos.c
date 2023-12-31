/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_data_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:26:41 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/21 13:15:45 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	min_data_pos(t_node *stack)
{
	t_node	*current;
	int		min;
	int		pos;

	pos = 1;
	min = min_data(stack);
	current = stack;
	while (current->data != min)
	{
		current = current->next;
		pos++;
	}
	return (pos);
}
