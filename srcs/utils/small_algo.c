/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 00:56:28 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/03 09:21:16 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	All the logics bihind small numbers algorithm.
    
        ##### 
        # 1 #   if the stack only holdsone node. return the node and free all
        ##### 

        #####  <=   #####	if the stack holds two nodes.
        # 2 #       # 1 #	first verify if it's sorted. if it is return the stack. 
        #####  =>   #####	else. swap the stack and return it.

		#####  <=   #####  <=   #####
        # 2 #       # 1 #       # 3 #  algo of 3 nodes
        #####  =>   #####  =>   #####

        #####  <=   #####  <=   #####   <=   #####  
        # 2 #       # 1 #       # 3 #        # 4 #  algo of 5 nodes
        #####  =>   #####  =>   #####   =>   #####

        #####  <=   #####  <=   #####   <=   #####   <=   #####
        # 2 #       # 1 #       # 3 #        # 4 #        # 5 #     algo of 5 nodes
        #####  =>   #####  =>   #####   =>   #####   =>   #####
*/

#include "../../push_swap.h"

t_node  *small_algo(t_node *stack_a, t_node *stack_b, t_push_utils *var)
{
    (void)stack_b;
	t_node *tmp = NULL;
	
    if(var->count_node == 1)
        return (stack_a);
    if(var->count_node == 2)
    {
        if(is_stack_sorted(stack_a) == true)
            return(stack_a);
        if(is_stack_sorted(stack_a) == false)
        {
            move_sa(stack_a);
            printstack(stack_a);
        }
    }
    if(var->count_node == 3)
    {
        printf("algo de 3\n");   
        move_ra(&stack_a, tmp);
        printstack(stack_a);
    }
    if(var->count_node > 3 && var->count_node <= 5)
	{
        move_ra(&stack_a, tmp);
        printstack(stack_a);
        printf("algo de 5\n");   
	}
    return(stack_a);
}

