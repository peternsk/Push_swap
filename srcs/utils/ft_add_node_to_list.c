/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_to_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:49:22 by peternsaka        #+#    #+#             */
/*   Updated: 2023/10/19 15:17:13 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/*
	argv[1] = " 1 2 3 45 65 77 876 4 -374 323 ";

	1) ft_split(argv[1], ' ');
		==> " "1" "2" "3" "45" "65" "77" "876" "4" "-374" " 323" "
			creer un array de string que je vais prendre chaque string et le transformer en long int.
		
*/

void	ft_add_node_to_list(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{ 
		//ft_split(str, ' ');
		printf("%c\n", str[i]);
		i++;
	}
}