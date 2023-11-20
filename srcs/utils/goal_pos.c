/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goal_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:02:42 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 10:29:31 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    this function will navigate throug the A stact and will analyze
    the goal position of the function and also 
    
    STACK A
        
            #######  <=   #######  <=   #######   <=  #######
            #  5  #       #  9  #       #  16 #       #  25 #
            #######  =>   #######  =>   #######   =>  #######
        
    NODE
        
            ######
            # 20 #
            ######
*/

#include "../../push_swap.h"

int	goal_pos(t_node **stack, int data)
{
	t_node *tmp;
	int steps;

	tmp = *stack;
        steps = 0;
	while (tmp)
	{
	        tmp->step_top_b = 0 + steps;
                if(tmp->prev == NULL && data < tmp->next->data)
                        printf("data goes on top\n");
                else if(tmp->data < data && data < tmp->next->data)
                        printf("data goes in between 2 nodes\n");
                else if(tmp->data < data && tmp->next == NULL)
                        printf("data goes at the end\n");
                tmp = tmp->next;
                steps++;
	}
        return(steps);
}
 