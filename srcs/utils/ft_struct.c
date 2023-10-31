/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:01:06 by peternsaka        #+#    #+#             */
/*   Updated: 2023/10/31 15:03:26 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_push_utils	*create_push_utils(void)
{
	t_push_utils	*var;

	var = malloc(1 * sizeof(t_push_utils));
	if (!var)
		return (NULL);
	var->int_arr = 0;
	var->count_node = 0;
	var->median = 0;
	return (var);
}
