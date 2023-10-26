/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:14:11 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/20 11:45:17 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

//double linked list
typedef struct s_node
{
	struct t_node	*prev;
	int				data;
	struct t_node	*next;
}					t_node;

typedef struct s_push_utils
{
	char **int_arr;
} t_push_utils;

t_push_utils	*create_push_utils(char *str);

void	ft_add_node_to_list(char *str, t_push_utils *utils);
void    ft_allow_char(char *str);
void	ft_sign_in_str(char *str);

#endif