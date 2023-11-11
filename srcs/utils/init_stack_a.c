/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:34:17 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/05 19:23:33 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node  *init_stack_a(int arg_c, char **arg_v, t_node *stack, t_stack *var)
{
    int i;
	int j;

	if(arg_c == 2)
	{
		i = -1;
		stack = create_stack(stack, ft_atoi(var->int_arr[++i]));
		while(var->int_arr[++i] != NULL)
			add_node_to_end(stack, ft_atoi(var->int_arr[i]));
		var->count_node = count_node(stack);
	}
	if(arg_c > 2)
	{
		j = 0;
		stack = create_stack(stack, ft_atoi(arg_v[++j]));
		while(arg_v[++j] != NULL)
			add_node_to_end(stack, atoi(arg_v[j]));
		var->count_node = count_node(stack);
	}
	if(check_dup_data(stack) == false)
		ft_exiting_prog(1, "error...duplicate data\n");
	return(stack);
}

