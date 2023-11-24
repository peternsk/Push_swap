/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/24 15:48:49 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc >= 2)
	{
		stack = create_push_utils();
		if(parse_str_arg(argc, stack, argv) == true)
			stack->a = init_stack(argc, argv, stack);
		if (check_dup_data(stack->a) == true)
		{
			stack->b = NULL;
			if (stack->count_node <= 5)
				small_algo(stack);
			if (stack->count_node > 5)
			{
				set_index(stack->a, count_node(stack->a));
				radix_sort(stack);
			}	
			free_stack(&stack->a);
			free(stack);
		}
		else
			ft_putstr_fd("Error", 2);
	}
	else
		return (EXIT_FAILURE);
}
