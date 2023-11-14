/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_node_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:28:51 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/14 10:40:30 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	        STACK 

            (head)
            #####  <=   #####  <=   #####   <=  #####
            # 1 #       # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####   =>  #####

			(del)	    (head)
			#####       #####  <=   #####   <=  #####
            # 1 #       # 2 #       # 3 #       # 4 #
            #####       #####  =>   #####   =>  #####

			(head)
			#####  <=   #####   <=  #####
            # 2 #       # 3 #       # 4 #
            #####  =>   #####   =>  #####
*/

#include "../../push_swap.h"

void	delete_node_front(t_node **stack)
{
	// t_node *current;
	// t_node *next;

	// current = *stack;
	// next = current->next;
	// *stack = next;
	// // next->prev = NULL;
	// current->next = NULL;
	// free(current);
	
	t_node *next;

	next = *stack;
	*stack = (*stack)->next;
	if(*stack)
		(*stack)->prev = 0;
	free(next);
}
