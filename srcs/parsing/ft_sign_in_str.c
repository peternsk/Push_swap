/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign_in_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:02:19 by peternsaka        #+#    #+#             */
/*   Updated: 2023/10/19 22:32:26 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sign_in_str(char *str)
{
	int sign;
	int i;

	sign = 0;
	i = 0;
	if(!str)
		return;
	if(str[i] == '-' || str[i] == '+')
	{
		printf("sign at right place in string : %s\n", str);
		sign++;
		i++;
	}
	while(str[i] != '\0')
	{
		if(str[i] == '-' || str[i] == '+')
			printf("sign error in string : %s\n", str);
		i++;
	}
	if(sign > 1)
		printf("sign error in string : %s\n", str);
}