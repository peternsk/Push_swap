/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:01:42 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/30 14:38:36 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node  ft_add_node_back(t_node **head, t_node *new_node)
{
    t_node *temp;
    
    if(new_node == NULL)
    {
        printf("non-existing list\n");
    }
    temp = *head;
    if(*head)
    {
        while(temp->next)
            temp = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
    }  
}