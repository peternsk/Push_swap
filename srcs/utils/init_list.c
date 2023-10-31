/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:39:54 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/31 10:33:13 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node	*init_list(int data)
{
	t_node *tmp;

	tmp = malloc(sizeof(t_node));
	tmp->prev = NULL;
	tmp->data = data;
	tmp->next = NULL;
	return(tmp);
}