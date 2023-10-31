/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_sa_sb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:18:22 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/26 12:41:59 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

typedef struct s_node
{
    int data;
    struct t_node *next;
} t_node;

void    printlinked_list(t_node *head)
{
    t_node *tempo = head;
    
    while(tempo != NULL)
    {
        printf("%d -", tempo->data);
        tempo = tempo->next;
    }
    printf("\n");
}

t_node  *create_new_node(int data)
{
    t_node *temp;
	temp = malloc(sizeof(t_node));
	temp->data = data;
	temp->next = NULL;
	return(temp);
}

// int main(int argc, char **argv)
// {
// 	int i;
// 	i = 0;
// 	int	number;

// 	(void)argc;
//     t_node *head = NULL;
// 	t_node *temp;
	

// 	while(argv[i] != NULL)
// 	{
// 		number = ft_atoi(argv[i]);
// 		temp = create_new_node(number);
// 		temp->next = head;
// 		head  = temp;
// 		i++;
// 	}
//     printlinked_list(head);
    
//     return(0);
// }