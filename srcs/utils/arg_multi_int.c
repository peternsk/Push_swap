/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_multi_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:47:30 by pnsaka            #+#    #+#             */
/*   Updated: 2023/12/04 13:21:28 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool    arg_multi_int(t_stack *stack, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    stack->val_tab = (long int *)malloc(stack->tab_size * sizeof(long int));
	if (!stack->val_tab)
		return (false);
    while (++i <= stack->tab_size )
	{

		stack->val_tab[i] = ft_atoi(argv[++j]);
		if (stack->val_tab[i] < INT_MIN || stack->val_tab[i] > INT_MAX)
			return (false);
	}
	return (true);
}
