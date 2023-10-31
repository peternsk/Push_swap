/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:57:48 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/30 15:14:24 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_arg_stack_a(char *str, t_push_utils *utils, t_node **head)
{
	int i;
	int	number;

	i = 0;
	number = 0;
	utils->int_arr = ft_split(str, ' ');
	while(utils->int_arr[i])
	{ 
		ft_sign_in_str(utils->int_arr[i]);
		number = ft_atoi(utils->int_arr[i]);
		head = ft_create_node(number);
		i++;
	}
}