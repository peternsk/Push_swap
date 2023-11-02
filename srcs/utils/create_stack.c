/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:57:48 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/02 10:39:48 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node 	*create_stack(int data)
{
	if(data < INT_MIN  || data > INT_MAX)
		return(NULL);
	return(init_list(data));
}
