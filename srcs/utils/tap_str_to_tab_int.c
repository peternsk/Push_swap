/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tap_str_to_tab_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:18:14 by pnsaka            #+#    #+#             */
/*   Updated: 2023/12/04 22:05:53 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	tap_str_to_tab_int(t_stack *stack, int argc, char **argv)
{
	if (argc == 2)
	{
		if (arg_2_int(stack) == false)
			return (false);
	}
	if (argc > 2)
	{
		if (arg_multi_int(stack, argv) == false)
			return (false);
	}
	return (true);
}
