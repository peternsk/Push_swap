/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tap_str_to_tab_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:18:14 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/27 16:01:20 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    tap_str_to_tab_int(t_stack *stack)
{
    int i;

    i = 0;
    stack->val_tab = malloc(sizeof(stack->tab_size + 1));
    if(!stack->val_tab)
        return ;
    while(++i < stack->tab_size)
    {
        stack->val_tab[i] = ft_atoi(stack->int_arr[i]);
    }
}
