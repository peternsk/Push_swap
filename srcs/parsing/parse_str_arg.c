/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_str_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:29:45 by pnsaka            #+#    #+#             */
/*   Updated: 2023/12/04 13:58:46 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	multi_arg_parse(t_stack *stack, char **arg_v)
{
	int	i;

	i = 0;
	while (arg_v[++i] != NULL)
	{
		if ((ft_allow_char(arg_v[i]) == false)
			|| (ft_sign_in_str(arg_v[i]) == false))
			return (false);
	}
	stack->tab_size = i - 1;
	return (true);
}

bool	parse_str_arg(int arg_n, t_stack *stack, char **arg_v)
{
	int	i;

	i = 0;
	if (arg_n == 2)
	{
		stack->int_arr = ft_split(arg_v[1], ' ');
		if (!stack->int_arr)
			return (NULL);
		while (stack->int_arr[i] != NULL)
		{
			if ((ft_sign_in_str(stack->int_arr[i]) == false
					|| (ft_allow_char(stack->int_arr[i]) == false)))
				return (false);
			i++;
		}
		stack->tab_size = i;
	}
	else
	{
		if (multi_arg_parse(stack, arg_v) == false)
			return (false);
	}
	return (true);
}
