/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:14:11 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 17:03:09 by pnsaka           ###   ########.fr       */
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
	int				index;
}					t_node;

typedef struct s_stack
{
	char			**int_arr;
	int				count_node;
	int				size;
	int				max_bits;
	t_node			*a;
	t_node			*b;
	int				i;
	int				j;

}					t_stack;

t_stack				*create_push_utils(void);

t_node				*create_stack(t_node *stack, int data, int index);
int					count_node(t_node *head);
t_node				*last_node(t_node *stack);
int					max_data(t_node *stack);
int					max_data_pos(t_node *stack);
int					min_data(t_node *stack);
int					min_data_pos(t_node *stack);
int					max_bits(t_node **stack);
void				set_index(t_node *stack, int size);

void				add_node_to_end(t_node *head, int data);
void				add_node_to_front(t_node **stack, int data, int index);
void				delete_node_front(t_node **stack);
t_node				*init_stack(int arg_c, char **arg_v, t_stack *stack);

//parse
void				parse_str_arg(int arg_n, t_stack *var, char **arg_v);
void				ft_allow_char(char *str);
void				ft_sign_in_str(char *str);
void				printstack(t_node *head);
bool				check_dup_data(t_node *stack);
bool				is_stack_sorted(t_node *stack);

//moves
void				move_sa(t_stack *stack);
void				move_sb(t_stack *stack);
void				move_ss(t_stack *stack);
void				move_ra(t_stack *stack);
void				move_rb(t_stack *stack);
void				move_rra(t_stack *stack);
void				move_pa(t_stack *stack);
void				move_pb(t_stack *stack);

//algo
void				small_algo(t_stack *stack);
void				algo_2_node(t_stack *stack);
void				algo_3_node(t_stack *stack);
void				algo_5_node(t_stack *stack);
void				radix_sort(t_stack *stack);

#endif