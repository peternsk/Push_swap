/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tap_str_to_tab_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:18:14 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/28 16:20:58 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool    tap_str_to_tab_int(t_stack *stack, int argc)
{
    int i;

    i = 0;
    if(argc == 2)
    {
        stack->val_tab = (long int *)malloc(stack->tab_size * sizeof(long int));
        if(!stack->val_tab)
            return(false);
        if(!stack->int_arr)
            return(printf("miss int_arr\n"), false);
        while(i < stack->tab_size)
        {
            stack->val_tab[i] = ft_atoi(stack->int_arr[i]);
            if(stack->val_tab[i] < INT_MIN || stack->val_tab[i] > INT_MAX)
                return(false);
            i++;
        }
        return(true);
    }
    return(true);
}
