/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:34:17 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/01 19:54:45 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node  *init_stack(int arg_c, char **arg_v, t_node *stack, t_push_utils *var)
{
    int i;

	i = -1;
	if(arg_c == 2)
	{
		stack = create_stack(ft_atoi(var->int_arr[++i]));
		while(var->int_arr[++i] != NULL)
			add_node_to_end(stack, ft_atoi(var->int_arr[i]));
	}
	if(arg_c > 2)
	{
		stack = create_stack(ft_atoi(arg_v[++i]));
		while(arg_v[++i] != NULL)
			add_node_to_end(stack, atoi(arg_v[i]));
	}
	printf("stack ok!\n");
	return(stack);
}

