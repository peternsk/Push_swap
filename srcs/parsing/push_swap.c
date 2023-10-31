/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/31 15:44:43 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int main(int argc, char **argv)
{
	t_push_utils *var;
	t_node *stack = NULL;
	
	int	i;
	int j;

	j = 0;
	i = 1;
	if(argc >= 2)
	{
		if(argc == 2)
		{	
			printf("--> in here 1\n");
			//funct_str
			var = create_push_utils();
			
			ft_allow_char(argv[1]);
			var->int_arr = ft_split(argv[1], ' ');
			ft_sign_in_str(var->int_arr[j]);
			
			printf("--> in here 2\n");
			stack = create_stack(ft_atoi(var->int_arr[0]));
			printf("--> in here 3\n");
			while(argv[++j] != NULL)
				add_node_to_end(stack, ft_atoi(argv[j]));
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
				add_node_to_end(stack, atoi(argv[i]));
			printstack(stack);
			//func2
			check_dup_data(stack);
			is_stack_sorted(stack);
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
