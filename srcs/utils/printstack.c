/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:41:01 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 14:52:43 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	printstack(t_node *head)
{
    t_node *tmp;
    
    tmp = head;
    while(tmp)
    {
        printf("data %d --- index %d\n", tmp->data, tmp->index);
        tmp = tmp->next;
    }
}
