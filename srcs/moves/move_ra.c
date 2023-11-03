/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:23:32 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/03 07:50:05 by peternsaka       ###   ########.fr       */
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

// void	move_ra(t_node *stack_a)
// {
// 	t_node *node_1;
// 	t_node *node_2;
// 	t_node *node_last = NULL;

// 	node_1 = stack_a;
// 	node_2 = node_1->next;
// 	node_last = last_node(stack_a);
   
// 	 node_last->next = node_1;
// 	 node_1->prev = node_last;
// 	 node_1->next = NULL;
// 	 node_2->prev = NULL;
	
//     printf("ra\n");
// }

void move_ra(t_node **stack_a, t_node *current)
{
	t_node *node_2;
	t_node *node_last;

    if (*stack_a == NULL || (*stack_a)->next == NULL) 
        return;
    current = *stack_a;
    node_2 = current->next;
    node_last = last_node(*stack_a);
    *stack_a = node_2;

   	node_last->next = current;
	current->next = NULL;
	current->prev = node_last;
	node_2->prev = NULL;
    printf("ra\n");
}
