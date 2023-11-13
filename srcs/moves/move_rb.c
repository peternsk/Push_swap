/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:31:59 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/13 11:26:34 by pnsaka           ###   ########.fr       */
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

void	move_rb(t_stack *stack)
{
	t_node *node_2;
	t_node *node_last;
	t_node *current;

    if (stack->a == NULL || (stack->a)->next == NULL)
		return ;
	current = stack->a;
    node_2 = current->next;
	node_last = last_node(stack->a);
	current->next = node_2;
	stack->a = node_2;
	node_last->next = current;
	current->next = NULL;
	current->prev = node_last;
	node_2->prev = NULL;
	printf("rb\n");
}
