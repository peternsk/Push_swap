/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:23:32 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/02 16:23:15 by pnsaka           ###   ########.fr       */
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

void	move_ra(t_node *stack_a)
{
	t_node *node_1;
	t_node *node_2;
	t_node *node_last = NULL;

	node_1 = stack_a;
    printf(" node 1 %p\n", node_1->prev);
    printf(" node 1 %p\n", node_1);
    printf(" node 1 %p\n", node_1->next);
	node_2 = node_1->next;
    printf(" node 2 %p\n", node_2->prev);
    printf(" node 2 %p\n", node_2);
    printf(" node 2 %p\n", node_2->next);
    while(node_1 != NULL)
    {
        node_1 = node_1->next;
        printf(" node 1 %p\n", node_1);
    }
    node_last = node_1->prev;
    printf(" node last %p\n", node_last->prev);
    printf(" node last %p\n", node_last->next);
    
    printf(" node 1 %p\n", node_1);
    printf(" node last %p\n", node_last);
    printf("ra\n");
}
