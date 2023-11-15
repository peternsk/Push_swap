/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_mov_prev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:33:50 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/15 12:10:46 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void     count_mov_prev(t_node **stack)
{
    t_node  *tmp;
    int     steps;

    tmp = *stack;
    steps = 0;
    while(tmp->prev != NULL)
    {
        steps++;
        tmp->step_top_a = steps;
        tmp = tmp->prev;
    }
    steps = 0;
}
