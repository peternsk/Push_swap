/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:01:03 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 15:57:08 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	algo_3_node(t_stack *stack)
{
	while(is_stack_sorted(stack->a) == false)
	{	
		if (max_data_pos(stack->a) == 1)
			move_ra(stack);
		else if (max_data_pos(stack->a) == 2)
			move_rra(stack);
		else if (max_data_pos(stack->a) == 3)
			move_sa(stack);
	}

}
