/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:05:26 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/21 13:10:40 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	algo_2_node(t_stack *stack)
{
	if (is_stack_sorted(stack->a) == true)
		return ;
	else
		move_sa(stack);
}
