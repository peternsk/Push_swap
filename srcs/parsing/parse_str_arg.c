/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_str_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:29:45 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/02 10:15:55 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    parse_str_arg(int arg_n, t_push_utils *var, char **arg_v)
{
    int i;

    i = 0;
    if(arg_n == 2)
    {
		var->int_arr = ft_split(arg_v[1], ' ');
        while(var->int_arr[i] != NULL)
        {
		    ft_sign_in_str(var->int_arr[i]);
            ft_allow_char(var->int_arr[i]);
            i++;   
        }
    }
    else
    {
        while(arg_v[++i] != NULL)
		{
			ft_allow_char(arg_v[i]);
			ft_sign_in_str(arg_v[i]);
		}
    }
    printf("parse ok!\n");
}
