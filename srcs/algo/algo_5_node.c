/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:23:50 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/11 14:13:02 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    algo_5_node(t_node *stack_a, t_node *stack_b)
{
    (void)stack_b;
    
    printf("max data --> %d\n", min_data(stack_a));
	printf("max position --> %d\n", min_data_pos(stack_a));
    
    if(min_data_pos(stack_a) == 1)
        printf("push sur la stack\n");
    if(min_data_pos(stack_a) > 1 && min_data_pos(stack_a) < 4)
        printf("on monte\n");
    if(min_data_pos(stack_a) == 4 || min_data_pos(stack_a) == 5)
        printf("on descend\n");
}
