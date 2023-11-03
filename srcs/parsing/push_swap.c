/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/03 09:21:37 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int main(int argc, char **argv)
{
	t_node *stack_a = NULL;
	t_node *stack_b = NULL;
	t_push_utils *var;

	if(argc >= 2)
	{
		var = create_push_utils();
		parse_str_arg(argc, var, argv);
		stack_a = init_stack_a(argc, argv, stack_a, var);
		printstack(stack_a);
		if(var->count_node <= 5)
			small_algo(stack_a, stack_b, var);
		if(var->count_node > 5)
			printf("main algo\n");
	}
	else
	{
		printf("missing or to o many arguments\n");
		return(EXIT_FAILURE);
	}
}
