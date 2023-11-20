/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:57:48 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 15:38:11 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node 	*create_stack(t_node *stack, int data, int index)
{
	if(data < INT_MIN  || data > INT_MAX)
		return(NULL);
	stack = malloc(sizeof(t_node));
	stack->prev = NULL;
	stack->data = data;
	stack->index = index;
	stack->next = NULL;
	return(stack);
}
