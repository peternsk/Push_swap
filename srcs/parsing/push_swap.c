/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:12:32 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/18 12:11:38 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int main(int argc, char **argv)
{
	if(argc == 2)
	{
    	//ft_add_node_to_list(argv[1]);
		ft_allow_char(argv[1]);
	}
	else
	{
		printf("missing or to o many arguments\n");
		return(EXIT_FAILURE);
	}
	return(EXIT_SUCCESS);
	
}