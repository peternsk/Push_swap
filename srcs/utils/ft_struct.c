/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:01:06 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/05 19:23:33 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*create_push_utils(void)
{
	t_stack	*var;

	var = malloc(1 * sizeof(t_stack));
	if (!var)
		return (NULL);
	var->int_arr = 0;
	var->count_node = 0;
	var->median = 0;
	return (var);
}
