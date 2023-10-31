/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:14:11 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/31 12:36:02 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/_types.h>
# include <unistd.h>

//double linked list
typedef struct s_node
{
	struct s_node	*prev;
	struct s_node	*next;
	int				data;
	int				index;
}					t_node;

typedef struct s_push_utils
{
	char			**int_arr;
	int				count_node;
}					t_push_utils;

t_push_utils		*create_push_utils(void);

t_node				*create_stack(int data);
int					count_node(t_node *head);

t_node				*init_list(int data);
t_node				*add_node_to_end(t_node *head, int data);

void				ft_allow_char(char *str);
void				ft_sign_in_str(char *str);
void				printstack(t_node *head);
void				check_dup_data(t_node *head);

#endif