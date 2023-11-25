/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:49:02 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/24 14:15:31 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	free_stack(t_node **lst)
{
	t_node	*clr_node;

	if (!*lst)
		return ;
	while (*lst != 0)
	{
		clr_node = (*lst)->next;
		free(*lst);
		(*lst) = clr_node;
	}
	(*lst) = 0;
}
