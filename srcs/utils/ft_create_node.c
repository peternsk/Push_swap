/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:39:54 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/30 14:22:35 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node  *ft_create_node(int data)
{
    t_node *temp;
	
	temp = malloc(sizeof(t_node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	return(temp);
}