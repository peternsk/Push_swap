/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_data_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:27:03 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 17:53:38 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	max_data_pos(t_node *stack)
{
	t_node *current;
	int max;
	int pos;

	pos = 1;
	max = max_data(stack);
	current = stack;
	while (current->data != max)
	{
		current = current->next;
		pos++;
	}
	return (pos);
}