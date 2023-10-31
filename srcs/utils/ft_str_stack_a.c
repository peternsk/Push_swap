/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:49:22 by peternsaka        #+#    #+#             */
/*   Updated: 2023/10/30 15:20:58 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_str_stack_a(char *str, t_push_utils *utils, t_node **head)
{
	int i;
	int	number;

	i = 0;
	number = 0;
	utils->int_arr = ft_split(str, ' ');
	while(utils->int_arr[i])
	{ 
		if(head == NULL)
		{
			//create_node
			ft_sign_in_str(utils->int_arr[i]);
			number = ft_atoi(utils->int_arr[i]);
			*head = ft_create_node(number);
		}
		else
		{
			//add_node_back
			ft_sign_in_str(utils->int_arr[i]);
			number = ft_atoi(utils->int_arr[i]);
			ft_add_node_back(&head, ft_create_node(number));
			i++;	
		}
	}
}