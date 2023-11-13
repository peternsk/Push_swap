/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:23:50 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/13 16:21:35 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    algo_5_node(t_stack *stack)
{
    while(count_node(stack->a) != 3)
    {   
        if(min_data_pos(stack->a) == 1)
		{
			move_pb(stack);
			printstack(stack->a);
		}
        if(min_data_pos(stack->a) > 1 && min_data_pos(stack->a) < 4)
		{
			move_ra (stack);
			printstack(stack->a);
		}
        if(min_data_pos(stack->a) == 4 || min_data_pos(stack->a) == 5)
		{
			move_rra(stack);
			printstack(stack->a);
		}
    }
	algo_3_node(stack);
	while(stack->b != NULL)
	{
		printstack(stack->a);
		move_pa(stack);
	}
	printstack(stack->a);
}
