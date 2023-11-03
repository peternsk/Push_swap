/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:14:11 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/03 16:11:16 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "include/libft/libft.h"
# include <limits.h>
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
}					t_node;

typedef struct s_push_utils
{
	char			**int_arr;
	int				count_node;
	int				median;
}					t_push_utils;

t_push_utils		*create_push_utils(void);

t_node				*create_stack(t_node *stack, int data);
int					count_node(t_node *head);
t_node				*last_node(t_node *stack);
int					max_data(t_node *stack);
int					max_data_pos(t_node *stack);

t_node				*add_node_to_end(t_node *head, int data);
t_node				*init_stack_a(int arg_c, char **arg_v, t_node *stack,
						t_push_utils *var);

//parse
void				parse_str_arg(int arg_n, t_push_utils *var, char **arg_v);
void				ft_allow_char(char *str);
void				ft_sign_in_str(char *str);
void				printstack(t_node *head);
bool				check_dup_data(t_node *stack);
bool				is_stack_sorted(t_node *stack);

//moves
void				move_sa(t_node **stack_a);
void				move_sb(t_node *stack_b);
void				move_ss(t_node *stack_a, t_node *stack_b);
void				move_ra(t_node **stack_a);
void				move_rb(t_node **stack_b, t_node *current);
void    			move_rra(t_node **stack_a);

//algo
t_node  			*small_algo(t_node *stack_a, t_node *stack_b, t_push_utils *var);
t_node				*algo_3_node(t_node	*stack);
t_node  			*algo_2_node(t_node *stack_a);
#endif