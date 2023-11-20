/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:30:31 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/20 17:52:04 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	count_node(t_node *head)
{
	int count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}