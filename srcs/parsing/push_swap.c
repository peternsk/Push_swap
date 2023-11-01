/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/01 13:25:39 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int main(int argc, char **argv)
{
	t_push_utils *var;
	t_node *stack_a;
	//t_node *stack_b = NULL;
	
	int	i;
	int j;

	j = 1;
	i = 1;
	if(argc >= 2)
	{
		var = create_push_utils();
		parse_str_arg(argc, var, argv);
		if(argc == 2)
		{	
			//funct_str
			stack_a = create_stack(ft_atoi(var->int_arr[0]));
			while(var->int_arr)
			{
				add_node_to_end(stack_a, ft_atoi(var->int_arr[j]));
				j++;
			}
			printstack(stack_a);
			//func2
			check_dup_data(stack_a);
			is_stack_sorted(stack_a);
			var->count_node = count_node(stack_a);
			printf("node num %d\n", var->count_node);
		}
		else
		{
			//funct_arg
			while(argv[i])
			{
				stack_a = create_stack(ft_atoi(argv[1]));
				while(argv[++i] != NULL)
				{
					add_node_to_end(stack_a, atoi(argv[i]));
				}
				printstack(stack_a);
				//func2
				check_dup_data(stack_a);
				is_stack_sorted(stack_a);
				move_sa(stack_a);
				printstack(stack_a);
				var->count_node = count_node(stack_a);
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
