/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:23:50 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/12 00:21:00 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    algo_5_node(t_node *stack_a, t_node *stack_b)
{
    while(count_node(stack_a) != 3)
    {   
        if(min_data_pos(stack_a) == 1)
		{
			move_pb(&stack_a, &stack_b);
			printstack(stack_b);
		}
        if(min_data_pos(stack_a) > 1 && min_data_pos(stack_a) < 4)
			move_ra(&stack_a);
        if(min_data_pos(stack_a) == 4 || min_data_pos(stack_a) == 5)
			move_rra(&stack_a);
    }
	algo_3_node(stack_a);
	printstack(stack_a);
}
