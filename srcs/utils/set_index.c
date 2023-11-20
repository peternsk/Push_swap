/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:41:48 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 15:59:41 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ########       ########       ########       ########       ########       ########       ########       ########
    # data #  =>   # data #  =>   # data #  =>   # data #  =>   # data #  =>   # data #  =>   # data #  =>   # data #
    # inx  #  =>   # inx  #  =>   # inx  #  =>   # inx  #  =>   # inx  #  =>   # inx  #  =>   # inx  #  =>   # inx #
    ########       ########       ########       ########       ########       ########       ########       ########

    ==> this function will navigate through the stack till he find the max int and set an index.
*/

#include "../../push_swap.h"

// void    set_index(t_node **stack)
// {   
// 	t_node	*tmp;
// 	int		index;

// 	index = 0;
//     tmp = *stack;
// 	while (tmp)
// 	{
//         if(tmp->data != -1)
//             printf("yessssssssss\n");
// 		tmp->index = index++;
//         tmp = tmp->next;
//     }
// }

void	set_index(t_node *stack, int size)
{
	t_node	*tmp;
	int		min;
	int		i;

	i = 0;
	while (size--)
	{
		min = 2147483647;
		tmp = stack;
		while (tmp)
		{
			if (tmp->data < min && tmp->index == -1)
				min = tmp->data;
			tmp = tmp->next;
		}
		tmp = stack;
		while (tmp)
		{
			if (tmp->data == min && tmp->index == -1)
				tmp->index = i++;
			tmp = tmp->next;
		}
	}
}