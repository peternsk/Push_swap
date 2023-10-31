/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:41:01 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/31 11:28:47 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	printstack(t_node *head)
{
    t_node *tempo = head;
    
    while(tempo)
    {
        printf("%d\n", tempo->data);
        tempo = tempo->next;
    }
    printf("\n");
}
