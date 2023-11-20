/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:41:48 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 10:57:06 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ########       ########       ########       ########       ########       ########       ########       ########
    # data #  =>   # data #  =>   # data #  =>   # data #  =>   # data #  =>   # data #  =>   # data #  =>   # data #
    # inx  #  =>   # inx  #  =>   # inx  #  =>   # inx  #  =>   # inx  #  =>   # inx  #  =>   # inx  #  =>   # inx #
    ########       ########       ########       ########       ########       ########       ########       ########

    ==> this function will navigate through the stack till he find the max int and set an index.
*/

#include "../../push_swap.h"

void    set_index(t_node **stack)
{
    t_node *tmp;
    int tmp_max;
    int max_indx;

    tmp = *stack;
    tmp_max = 0;
    max_indx = count_node(tmp);
    while(tmp)
    {
        if()
        tmp = tmp->next;
    }
    
}
