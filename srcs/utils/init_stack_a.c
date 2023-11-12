/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:34:17 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/12 15:16:37 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack  *init_stack_a(int arg_c, char **arg_v, t_stack *stack)
{
    int i;
	int j;

	if(arg_c == 2)
	{
		i = -1;
		stack->a = create_stack(stack->a, ft_atoi(stack->int_arr[++i]));
		while(stack->int_arr[++i] != NULL)
			add_node_to_end(stack->a, ft_atoi(stack->int_arr[i]));
		stack->count_node = count_node(stack);
	}
	if(arg_c > 2)
	{
		j = 0;
		stack->a = create_stack(stack->a, ft_atoi(arg_v[++j]));
		while(arg_v[++j] != NULL)
			add_node_to_end(stack, atoi(arg_v[j]));
		stack->count_node = count_node(stack->a);
	}
	if(check_dup_data(stack->a) == false)
		ft_exiting_prog(1, "error...duplicate data\n");
	return(stack);
}

