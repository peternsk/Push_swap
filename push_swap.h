/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:14:11 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/30 15:19:57 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/_types.h>
# include "libft/libft.h"

//double linked list
typedef struct s_node
{
	struct t_node	*prev;
	int				data;
	struct s_node	*next;
}					t_node;

typedef struct s_push_utils
{
	char **int_arr;
} t_push_utils;

t_push_utils	*create_push_utils(char *str);

void	ft_str_stack_a(char *str, t_push_utils *utils, t_node **head);
void	ft_arg_stack_a(char *str, t_push_utils *utils, t_node **head);

t_node  *ft_create_node(int data);
t_node  ft_add_node_back(t_node **head, t_node *new_node);

void    ft_allow_char(char *str);
void	ft_sign_in_str(char *str);
void    printlinked_list(t_node *head);

#endif