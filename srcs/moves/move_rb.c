/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:31:59 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/03 11:22:28 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ra (rotate a): Shift up all elements of stack a by 1.
		The first element becomes the last one.
    rb (rotate b): Shift up all elements of stack b by 1.
		The first element becomes the last one.

        STACK A
        
            #####  <=   #####  <=   #####   <=  #####
            # 1 #       # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####   =>  #####
        
        STACK A
        
            #####  <=   #####  <=   #####   <=  #####
            # 2 #       # 3 #       # 4 #       # 1 #
            #####  =>   #####  =>   #####   =>  #####
*/

#include "../../push_swap.h"

void	move_rb(t_node **stack_b, t_node *current)
{
	t_node *node_2;
	t_node *node_last;

    if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	current = *stack_b;
    node_2 = current->next;
	node_last = last_node(*stack_b);
	current->next = node_2;
	*stack_b = node_2;
	node_last->next = current;
	current->next = NULL;
	current->prev = node_last;
	node_2->prev = NULL;
	printf("rb\n");
}
