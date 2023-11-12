/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:01:03 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/12 14:47:24 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	algo_3_node(t_node	*stack_a)
{
	while(is_stack_sorted(stack_a) == false)
	{	
		if (max_data_pos(stack_a) == 1)
			move_ra(&stack_a);
		else if (max_data_pos(stack_a) == 2)
			move_rra(&stack_a);
		else if (max_data_pos(stack_a) == 3)
			move_sa(&stack_a);
	}
	printstack(stack_a);
}
