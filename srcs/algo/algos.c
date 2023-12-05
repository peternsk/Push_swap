/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:32:24 by peternsaka        #+#    #+#             */
/*   Updated: 2023/12/05 14:13:41 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	algos(t_stack *stack)
{
	stack->b = NULL;
	if (stack->count_node <= 5)
		small_algo(stack);
	if (stack->count_node > 5)
		radix_sort(stack);
}
