/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:05:26 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/04 18:32:25 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void  *algo_2_node(t_node *stack_a)
{
    if (is_stack_sorted(stack_a) == true)
			return;
		else
			move_sa(&stack_a);
}