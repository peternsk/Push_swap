/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allow_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:32:06 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/18 12:12:30 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    ft_allow_char(char *str)
{
    int i;

    i = 0;
    if(!str)
        return ;
    while(str[i] != '\0')
    {
        if((str[i] >= 48 && str[i] <= 57) || str[i] == 32 || str[i] == 45 || str[i] == 43)
        {
            printf("%c\n", str[i]);
            i++;
        }
        else 
            ft_exiting_prog(1, "char error");      
    }
}