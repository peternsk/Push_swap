/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:57:48 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/12 15:05:43 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node 	*create_stack(t_stack *stack, int data)
{
	if(data < INT_MIN  || data > INT_MAX)
		return(NULL);
	stack->a = malloc(sizeof(t_node));
	stack->a->prev = NULL;
	stack->a->data = data;
	stack->a->next = NULL;
	return(stack->a);
}
