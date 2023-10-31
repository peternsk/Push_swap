/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intro_linked_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:01:46 by peternsaka        #+#    #+#             */
/*   Updated: 2023/10/22 23:21:02 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct s_node
{
	int data;
	struct t_node *next; 
}	t_node;

void	printlist(t_node *head)
{
	t_node *temporary = head;
	while(temporary != 0)
	{
		printf("%d - ", temporary->data);
		temporary = temporary->next;
	}
	printf("\n");
}

int main(void)
{
	t_node n1, n2, n3;
	t_node *head;

	n1.data = 45;
	n2.data = 11;
	n3.data = 20;

	head = &n3;
	n3.next = &n2;
	n2.next = &n1;
	n1.next = 0;

	printlist(head);

	return(0);
}
