/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_mov_next.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:46:22 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/16 09:44:39 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	count_mov_next(t_node **stack)
{
	t_node *tmp;
	int steps;

	tmp = *stack;
	steps = 0;
	while (tmp->next != NULL)
	{
		steps++;
		tmp->step_top_a = steps;
		tmp = tmp->next;
	}
	steps = 0;
}