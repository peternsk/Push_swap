/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:00:54 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/02 00:57:17 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
    #####       #####       #####       #####       #####       #####       #####       #####
    # 1 #  =>   # 2 #  =>   # 3 #  =>   # 4 #  =>   # 5 #  =>   # 6 #  =>   # 3 #  =>   # 7 #
    #####       #####       #####       #####       #####       #####       #####       #####

    ==> this function will navigate through the stack and check if there is any duplicate data 
        in the list.
    
    

*/

#include "../../push_swap.h"

bool    check_dup_data(t_node *stack)
{
    t_node *tmp;
    t_node *current;

    tmp = stack;
    while(tmp->next != NULL)
    {
        current = stack;
        while(current != NULL)
        {
            if(tmp->data == current->data && tmp != current)
                return(false);
            else
                current = current->next;
        }
        tmp = tmp->next;
    }
	return(true);
}