/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:00:54 by pnsaka            #+#    #+#             */
/*   Updated: 2023/12/04 21:26:32 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	check_dup_data(t_node *stack) 
{
    t_node *tmp;
    t_node *current;

    tmp = stack;
    while (tmp != NULL)
	{
        current = tmp->next;
        while (current != NULL) 
		{
            if (tmp->data == current->data) 
                return true;
            current = current->next;
        }
        tmp = tmp->next;
    }
    return false;
}

