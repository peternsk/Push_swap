/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/01 19:56:09 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int main(int argc, char **argv)
{
	t_push_utils *var;
	t_node *stack_a = NULL;
	//t_node *stack_b = NULL;

	if(argc >= 2)
	{
		var = create_push_utils();
		parse_str_arg(argc, var, argv);
		stack_a = init_stack(argc, argv, stack_a, var);
		printstack(stack_a);
		//func2
		check_dup_data(stack_a);
		is_stack_sorted(stack_a);
		move_sa(stack_a);
		printstack(stack_a);
		var->count_node = count_node(stack_a);
		printf("node num %d\n", var->count_node);
	}
	else
	{
		printf("missing or to o many arguments\n");
		return(EXIT_FAILURE);
	}
}
