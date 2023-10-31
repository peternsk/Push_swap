/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/30 12:48:04 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int main(int argc, char **argv)
{
	t_push_utils *utils;
	t_node *head = NULL;
	
	int	i;

	i = 0;
	if (argc < 2)
	{
		printf("missing or to o many arguments\n");
		return(EXIT_FAILURE);
	}
	if(argc == 2)
	{
		ft_allow_char(argv[1]);
		utils = create_push_utils(argv[1]);
		//create
    	ft_str_stack_a(argv[1], utils, &head);
		printlinked_list(head);
		printf("done\n");
		
	}
	else
	{
		//technicly this while loop is going to be remplace by an other function
		while(argv[i])
		{
			utils = create_push_utils(argv[1]);
			//create
			ft_arg_stack_a(argv[i], utils, &head);
			printlinked_list(head);
			i++;
		}
		printf("done\n");
	}
	return(EXIT_SUCCESS);
	
}
