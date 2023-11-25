/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:14:41 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 17:50:46 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	move_sa(t_stack *stack)
{
	t_node	*tmp;
	int		swap;

	tmp = stack->a;
	swap = 0;
	if (tmp == NULL || tmp->next == NULL)
		return ;
	swap = tmp->next->data;
	tmp->next->data = tmp->data;
	tmp->data = swap;
	printf("sa\n");
}
