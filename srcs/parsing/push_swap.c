/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/27 15:46:31 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc >= 2)
	{
		stack = create_push_utils();
		if (parse_str_arg(argc, stack, argv) == false)
			return(ft_putstr_fd("Error", 2), free(stack), 1);
		tap_str_to_tab_int(stack);
		stack->a = init_stack(argc, argv, stack);
		if (check_dup_data(stack->a) == true)
		{
			algos(stack);
			free_stack(&stack->a);
			free(stack);
		}
		else
			ft_putstr_fd("Error", 2);
	}
	else
		return (EXIT_FAILURE);
}
