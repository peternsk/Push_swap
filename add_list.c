/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:10:04 by peternsaka        #+#    #+#             */
/*   Updated: 2023/10/31 10:10:19 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_node
{
	struct s_node *prev;
	struct s_node *next;
	int data;
	int index;
}	t_node;

void	printstack(t_node *head)
{
	while(head != NULL)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
	printf("NULL\n");
}

t_node	*init_list(int data)
{
	t_node *tmp;

	tmp = malloc(sizeof(t_node));
	tmp->prev = NULL;
	tmp->data = data;
	tmp->next = NULL;
	return(tmp);
}

t_node	*add_node_to_end(t_node *head, int data)
{
	t_node *tmp;
	t_node *current;

	tmp = malloc(sizeof(t_node));
	tmp->prev = NULL;
	tmp->data = data;
	tmp->next = NULL;
	current = head;
	while(current->next != NULL)
		current = current->next;
	tmp->prev = current;
	current->next = tmp;
	return(head);
}


t_node 	*create_stack(int data)
{
	if(data == 0)
		return(NULL);
	return(init_list(data));
}

int	count_node(t_node *head)
{
	int count = 0;

	while(head != NULL)
	{
		count++;
		head = head->next;
	}
	return(count);
}
void	set_index(t_node *head)
{

}

int main(int argc, char **argv)
{
	t_node *head;
	int i;
	int count;

	i = 1;
	if(argc >= 2)
	{
		head = create_stack(atoi(argv[1]));
		while(argv[++i] != NULL)
			add_node_to_end(head, atoi(argv[i]));
		printstack(head);
		count = count_node(head);
		printf("%d\n", count);
	}
	else
		printf("missing argument to create stack\n");
}

