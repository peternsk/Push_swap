/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign_in_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:02:19 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/01 13:27:42 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sign_in_str(char *str)
{
	int sign;
	int i;

	sign = 0;
	i = 0;
	if (!str)
		return ;
	if (str[i] == '-' || str[i] == '+')
	{
		sign++;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			ft_exiting_prog(1, "wrong sign!\n");
		i++;
	}
	if (sign > 1)
		ft_exiting_prog(1, "too many signs!\n");
}