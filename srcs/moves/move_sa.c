/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:14:41 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/01 00:08:28 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    sa (swap a): Swap the first 2 elements at the top of stack a.
        Do nothing if there is only one or no elements.
    sb (swap b): Swap the first 2 elements at the top of stack b.
        Do nothing if there is only one or no elements.

    STACK A
    
        #####  <=   #####  <=   #####   <=  #####
        # 1 #       # 2 #       # 3 #       # 4 #
        #####  =>   #####  =>   #####   =>  #####

    MOVE_SA

        #####  <=   #####  <=   #####   <=  #####
        # 2 #       # 3 #       # 4 #       # 1 #
        #####  =>   #####  =>   #####   =>  #####
*/

#include "../../push_swap.h"

void	move_sa(t_node *stack)
{
    t_node *node_1;
    t_node *node_2;

	node_1 = stack;
	node_2 = node_1->next;

	node_1->prev = node_2;
	node_2->prev = NULL;
	node_1->next = node_2->next;
	node_2->next = node_1;
	printf("sa\n");
}