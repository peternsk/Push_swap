/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:00:54 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/31 13:51:15 by pnsaka           ###   ########.fr       */
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

void    check_dup_data(t_node *head)
{
    t_node *tmp;
    t_node *current;

    tmp = head;
    while(tmp->next != NULL)
    {
        current = head;
        while(current != NULL)
        {
            if(tmp->data == current->data && tmp != current)
                ft_exiting_prog(1, "error...duplicate data\n");
            else
                current = current->next;
        }
        tmp = tmp->next;
    }
}