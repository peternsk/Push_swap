/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:41:01 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/26 13:51:10 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    printlinked_list(t_node *head)
{
    t_node *tempo = head;
    
    while(tempo)
    {
        printf("%d -", tempo->data);
        tempo = tempo->next;
    }
    printf("\n");
}
