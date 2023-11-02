/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:23:32 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/02 09:59:25 by pnsaka           ###   ########.fr       */
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
    (void)stack_a;
// 	t_node *tmp;
// 	t_node *tmp_nxt;
// 	t_node *tmp_last;

// 	tmp = stack_a;
// 	tmp_nxt = tmp->next;
}
