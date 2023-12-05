/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_multi_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:47:30 by pnsaka            #+#    #+#             */
/*   Updated: 2023/12/04 21:20:45 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool arg_multi_int(t_stack *stack, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    stack->val_tab = (long int *)malloc((stack->tab_size + 1) * sizeof(long int));
    if (!stack->val_tab)
        return false;
    while (++i <= stack->tab_size)
	{
        stack->val_tab[i - 1] = ft_atoi(argv[++j]);
        if (stack->val_tab[i - 1] < INT_MIN || stack->val_tab[i - 1] > INT_MAX)
		{
            free(stack->val_tab); 
            return false;
        }
    }
    stack->val_tab[i - 1] = '\0';
    return true;
}
