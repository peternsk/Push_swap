/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:27:06 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/12 00:15:46 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    pa (push a): Take the first element at the top of b and put it at the top of a. 
        Do nothing if b is empty.
    pb (push b): Take the first element at the top of a and put it at the top of b.
        Do nothing if a is empty.

    
    
        STACK B
        
            #####  <=   #####  <=   #####   <=  #####
            # 1 #       # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####   =>  #####
        
        STACK A
        
            #####  <=   #####  <=   #####   <=  #####
            # 1 #       # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####   =>  #####

    MOVE PB


        STACK B
        
            #####  <=   #####  <=   #####   <=  #####   <=  #####
            # 1 #       # 1 #       # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####   =>  #####   =>  #####
    
        STACK A
    
            #####  <=   #####  <=   #####
            # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####
*/

#include "../../push_swap.h"

void	move_pb(t_node **stack_a, t_node **stack_b)
{
	t_node *current;

	current = *stack_a;
	if(*stack_b == NULL)
		*stack_b = create_stack(*stack_b, current->data);
	else
		add_node_to_front(stack_b, current->data);
	delete_node_front(stack_a);
	printf("pb\n");
}
