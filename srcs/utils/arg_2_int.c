/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_2_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:47:28 by pnsaka            #+#    #+#             */
/*   Updated: 2023/12/04 15:07:32 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	arg_2_int(t_stack *stack)
{
	int	i;

	i = 0;
	printf("TAB SIZE ARG %d\n", stack->tab_size);
	stack->val_tab = (long int *)malloc(stack->tab_size * sizeof(long int));
	if (!stack->val_tab)
		return (false);
	if (!stack->int_arr)
		return (printf("miss int_arr\n"), false);
	while (i < stack->tab_size)
	{
		stack->val_tab[i] = ft_atoi(stack->int_arr[i]);
		printf("VAL TAB %ld\n", stack->val_tab[i]);
		if (stack->val_tab[i] < INT_MIN || stack->val_tab[i] > INT_MAX)
			return (false);
	}
	stack->val_tab[i] = '\0';
	free_2d_arr(stack->int_arr);
	return (true);
}
