/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:28:39 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/14 22:45:34 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
		provide the position to the node in the stack

        STACK 
        
            #########  <=   #########  <=   #########   <=  #########   <=  #########  <=   #########  <=   #########
            # data	#       # data	#       # data	#       # data	#		# data	#       # data	#       # data	#
			# pos 	#       # pos 	#       # pos 	#       # pos 	#		# pos 	#       # pos 	#       # pos 	#
            #########  =>   #########  =>   #########   =>  #########   =>  #########  =>   #########  =>   #########

		NODE_POS(STACK)
		
			#########  <=   #########  <=   #########   <=  #########   <=  #########  <=   #########  <=   #########
            # data	#       # data	#       # data	#       # data	#		# data	#       # data	#       # data	#
			# 1 	#       # 2 	#       # 3 	#       # 4 	#		# 5 	#       # 6 	#       # 7 	#
            #########  =>   #########  =>   #########   =>  #########   =>  #########  =>   #########  =>   #########

			while the stack isnt null, the function will assing a position to the node.
        
*/

#include "../../push_swap.h"

void	node_pos(t_node *stack)
{
	int pos;
	t_node *tmp;

	pos = 0;
    tmp = stack;
    while(tmp)
	{
		stack->stack_pos = pos;
		printf("%d\n", stack->stack_pos);
        tmp = tmp->next;
		pos++;
	}
}