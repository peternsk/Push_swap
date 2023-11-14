/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/14 10:28:31 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int main(int argc, char **argv)
{
	t_stack *stack;

	if(argc >= 2)
	{
		stack = create_push_utils();
		parse_str_arg(argc, stack, argv);
		stack->a = init_stack(argc, argv, stack);
		stack->b = NULL;
		if(stack->count_node <= 5)
			small_algo(stack);
		if(stack->count_node > 5)
			printf("main algo\n");
	}
	else
	{
		printf("missing or to o many arguments\n");
		return(EXIT_FAILURE);
	}
}
