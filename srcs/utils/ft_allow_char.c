/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allow_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:32:06 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/29 09:35:32 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	ft_allow_char(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (false);
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57) || str[i] == 45 || str[i] == 43)
			i++;
		else
			return (false);
	}
	if (strlen(str) == 1 && (str[0] == 45 || str[0] == 43))
		return (false);
	return (true);
}
