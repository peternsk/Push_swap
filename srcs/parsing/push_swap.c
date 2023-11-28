/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/28 16:19:11 by pnsaka           ###   ########.fr       */
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
			return(ft_putstr_fd("Error parse..", 2), free(stack), 1);
		if(tap_str_to_tab_int(stack, argc) == false)
			return(ft_putstr_fd("Error int", 2), free(stack), 1);
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
