/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_2_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:47:28 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/29 18:36:30 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool    arg_2_int(t_stack *stack)
{
    int i;

    i = 0;
    stack->val_tab = (long int *)malloc(stack->tab_size * sizeof(long int));
	if (!stack->val_tab)
		return (false);
	if (!stack->int_arr)
		return (printf("miss int_arr\n"), false);
	while (i < stack->tab_size)
	{
		stack->val_tab[i] = ft_atoi(stack->int_arr[i]);
		if (stack->val_tab[i] < INT_MIN || stack->val_tab[i] > INT_MAX)
			return (false);
		i++;
	}
	//free_2d_arr(stack->int_arr);
	return (true);
}