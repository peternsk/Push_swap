/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:01:06 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/20 17:03:34 by pnsaka           ###   ########.fr       */
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
	var->max_bits = 0;
	var->size = 0;
	return (var);
}
