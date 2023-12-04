/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_multi_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:47:30 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/29 18:39:54 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool    arg_multi_int(t_stack *stack, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 1;
    stack->val_tab = (long int *)malloc(stack->tab_size * sizeof(long int));
	if (!stack->val_tab)
		return (false);
    while (++i < stack->tab_size )
	{
		stack->val_tab[i] = ft_atoi(argv[j]);
		printf("value %ld\n", stack->val_tab[i]);
		printf("---> i value %d\n", i);
		if (stack->val_tab[i] < INT_MIN || stack->val_tab[i] > INT_MAX)
			return (false);
		j++;
	}
	return (true);
}
