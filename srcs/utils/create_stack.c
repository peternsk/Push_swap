/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:57:48 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/24 15:05:37 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node	*create_stack(t_node *stack, int data, int index)
{
	if (data < 2147483647 && data > -2147483648)
	{
		stack = malloc(sizeof(t_node));
		if (!stack)
			return (0);
		stack->prev = NULL;
		stack->data = data;
		stack->index = index;
		stack->next = NULL;
		return (stack);
	}
	else
		ft_exiting_prog("Error int value...");
	return (0);
}
