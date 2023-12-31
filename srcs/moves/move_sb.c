/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_sb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:07:26 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 17:50:59 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	move_sb(t_stack *stack)
{
	t_node	*tmp;
	int		swap;

	tmp = stack->a;
	swap = 0;
	if (!tmp || tmp->next == NULL)
		return ;
	swap = tmp->next->data;
	tmp->next->data = tmp->data;
	tmp->data = swap;
	printf("sb\n");
}
