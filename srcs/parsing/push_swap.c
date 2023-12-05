/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/12/05 15:23:48 by pnsaka           ###   ########.fr       */
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
			return (ft_putendl_fd("Error", 2), free_2d_arr(stack->int_arr),
				free(stack), EXIT_FAILURE);
		if (tap_str_to_tab_int(stack, argc, argv) == false)
			return (ft_putendl_fd("Error", 2),
					free(stack),
					EXIT_FAILURE);
		stack->a = init_stack(argc, stack);
		if (check_dup_data(stack->a) == true)
		{
			ft_putendl_fd("Error", 2);
			return (0);
		}
		if (is_stack_sorted(stack->a) == false)
			algos(stack);
		free_stack(&stack->a);
		free(stack->val_tab);
		free(stack);
	}
	else
		return (EXIT_FAILURE);
}
