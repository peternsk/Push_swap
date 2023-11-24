/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign_in_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:02:19 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/24 15:21:32 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	ft_sign_in_str(char *str)
{
	int	sign;
	int	i;

	sign = 0;
	i = 0;
	if (!str)
		return(false);
	if (str[i] == '-' || str[i] == '+')
	{
		sign++;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return(false);
		i++;
	}
	if (sign > 1)
		return(false);
	return(true);
}
