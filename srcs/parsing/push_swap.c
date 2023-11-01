/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/01 00:06:25 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int main(int argc, char **argv)
{
	t_push_utils *var;
	t_node *stack = NULL;
	
	int	i;
	int j;

	j = 1;
	i = 1;
	if(argc >= 2)
	{
		if(argc == 2)
		{	
			//funct_str
			var = create_push_utils();
			
			ft_allow_char(argv[1]);
			var->int_arr = ft_split(argv[1], ' ');
			
			stack = create_stack(ft_atoi(var->int_arr[0]));
			while(var->int_arr)
			{
				ft_sign_in_str(var->int_arr[j]);
				add_node_to_end(stack, ft_atoi(var->int_arr[j]));
				j++;
			}
			printstack(stack);
			//func2
			check_dup_data(stack);
			is_stack_sorted(stack);
			var->count_node = count_node(stack);
			printf("node num %d\n", var->count_node);
		}
		else
		{
			//funct_arg
			while(argv[i])
			{
				var = create_push_utils();
				stack = create_stack(ft_atoi(argv[1]));
				while(argv[++i] != NULL)
				{
					ft_allow_char(argv[i]);
					ft_sign_in_str(argv[i]);
					add_node_to_end(stack, atoi(argv[i]));
				}
				printstack(stack);
				//func2
				check_dup_data(stack);
				is_stack_sorted(stack);
				move_sa(stack);
				printstack(stack);
				var->count_node = count_node(stack);
				printf("node num %d\n", var->count_node);
			}
		}
		return(EXIT_SUCCESS);
	}
	else
	{
		printf("missing or to o many arguments\n");
		return(EXIT_FAILURE);
	}
}
