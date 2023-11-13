/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:14:41 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/13 11:19:29 by pnsaka           ###   ########.fr       */
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
        # 2 #       # 1 #       # 3 #       # 4 #
        #####  =>   #####  =>   #####   =>  #####

        ==> Data switch
*/

#include "../../push_swap.h"

void	move_sa(t_stack *stack)
{
	t_node *tmp;
	int swap;

	tmp = stack->a;
	swap = 0;
	if (tmp == NULL || tmp->next == NULL)
		return ;
	swap = tmp->next->data;
	tmp->next->data = tmp->data;
	tmp->data = swap;
	printf("sa\n");
}
