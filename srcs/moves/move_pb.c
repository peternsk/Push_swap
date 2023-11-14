/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:27:06 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/14 09:28:50 by pnsaka           ###   ########.fr       */
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

void	move_pb(t_stack *stack)
{
	t_node *top_a;

	top_a = stack->a;
	if(stack->b == NULL)
		stack->b  = create_stack(stack->b, top_a->data);
	else
		add_node_to_front(&stack->a, top_a->data);
	delete_node_front(&stack->a);
	printf("pb\n");
}
