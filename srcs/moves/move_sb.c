/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_sb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:07:26 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/01 11:25:58 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    sa (swap a): Swap the first 2 elements at the top of stack a.
        Do nothing if there is only one or no elements.
    sb (swap b): Swap the first 2 elements at the top of stack b.
        Do nothing if there is only one or no elements.

    STACK B
    
        #####  <=   #####  <=   #####   <=  #####
        # 1 #       # 2 #       # 3 #       # 4 #
        #####  =>   #####  =>   #####   =>  #####

    MOVE_SB

        #####  <=   #####  <=   #####   <=  #####
        # 2 #       # 1 #       # 3 #       # 4 #
        #####  =>   #####  =>   #####   =>  #####

        ==> Data switch
*/

#include "../../push_swap.h"

void	move_sb(t_node *stack_b)
{
	t_node *tmp;
	int swap;

	tmp = stack_b;
	swap = 0;
	if (!tmp || tmp->next == NULL)
		return ;
	swap = tmp->next->data;
	tmp->next->data = tmp->data;
	tmp->data = swap;
	printf("sb\n");
}
