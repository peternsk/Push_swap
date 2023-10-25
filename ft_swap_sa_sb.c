/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_sa_sb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:18:22 by pnsaka            #+#    #+#             */
/*   Updated: 2023/10/25 12:00:41 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

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

t_node  *create_new_node(int data)
{
    4
}

int main(void)
{
    t_node n1, n2, n3, n4, n5, n6, n7, n8;
    t_node *head;
    
    n1.data = 1;
    n2.data = 2;
    n3.data = 3;
    n4.data = 4;
    n5.data = 5;
    n6.data = 6;
    n7.data = 7;
    n8.data = 8;
    
    //linking the node
    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = &n7;
    n7.next = &n8;
    n8.next = NULL;

    printlinked_list(head);
    
    return(0);
}