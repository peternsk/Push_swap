/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:05:26 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/03 15:09:05 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node  *algo_2_node(t_node *stack_a)
{
    if (is_stack_sorted(stack_a) == true)
			return (stack_a);
		else
			move_sa(stack_a);
    return(stack_a);
}