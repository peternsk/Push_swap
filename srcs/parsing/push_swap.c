/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/22 19:32:11 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int main(int argc, char **argv)
{
	t_push_utils *utils;
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
    	ft_add_node_to_list(argv[1], utils);
	}
	else
	{
		//technicly this while loop is going to be remplace by an other function
		while(argv[i])
		{
			ft_sign_in_str(argv[i]);
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return(EXIT_SUCCESS);
	
}