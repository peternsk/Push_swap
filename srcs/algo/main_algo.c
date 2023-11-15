/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:36:13 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/14 14:50:46 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    main_algo(t_stack *stack)
{
    while(count_node(stack->a) != 3)
        move_pb(stack);
    algo_3_node(stack);
    printf("---stack a---\n");
    printstack(stack->a);
    printf("---stack b---\n");
    printstack(stack->b);
}