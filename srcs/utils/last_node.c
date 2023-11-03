/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:38:54 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/03 07:34:33 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    #####       #####       #####       #####       #####       #####       #####       #####
    # 1 #  =>   # 2 #  =>   # 3 #  =>   # 4 #  =>   # 5 #  =>   # 6 #  =>   # 3 #  =>   # 7 #
    #####       #####       #####       #####       #####       #####       #####       #####

    ==> this function will navigate through the stack till he find the last node of the stack.
*/

#include "../../push_swap.h"

t_node	*last_node(t_node *stack)
{
	t_node *tmp;

	tmp = stack;
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	return (tmp);
}