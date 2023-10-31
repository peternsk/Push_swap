/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stack_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:10:59 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/31 14:43:16 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    #####       #####       #####       #####       #####       #####       #####       #####
    # 1 #  =>   # 2 #  =>   # 3 #  =>   # 4 #  =>   # 5 #  =>   # 6 #  =>   # 3 #  =>   # 7 #
    #####       #####       #####       #####       #####       #####       #####       #####

    ==> the function will travel throug all the list to verrify if the stack is sorted.
        
*/

#include "../../push_swap.h"

void    is_stack_sorted(t_node *stack)
{
    t_node *node;
    
    node = stack;
    while(node && node->next)
    {
        if(node->data > node->next->data)
        {
            printf("stack not sorted\n");
            return ;
        }
        node = node->next;
    }
    printf("stack  sorted\n");
    
}