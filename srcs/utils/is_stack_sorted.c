/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stack_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:10:59 by pnsaka            #+#    #+#             */
/*   Updated: 2023/12/04 21:30:46 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool is_stack_sorted(const t_node *stack)
{
    const t_node *node = stack;

    while (node && node->next) 
	{
        if (node->data > node->next->data) 
            return false;
        node = node->next;
    }
    return true;
}
