/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_sa_sb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:18:22 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/30 10:33:07 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/_types.h> 

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
        //printf("- %p", tempo->next);
        tempo = tempo->next;
    }
    printf("\n");
}

t_node  *create_new_node(char data)
{
	if (head == NULL)
	{
		printf("hello\n");
	}
    t_node *temp;
	temp = malloc(sizeof(t_node));
	temp->data = data;
	temp->next = NULL;
	return(temp);
}

int main(int argc, char **argv)
{
	int i;
	i = 0;

    t_node *head = NULL;
	t_node *temp = NULL;

	while(argv[i] != NULL)
	{
		temp = create_new_node(argv[i]);
		temp->next = head;
		head  = temp;
		i++;
	}
    printlinked_list(head);
    
    return(0);
}