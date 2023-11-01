/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:33:33 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/01 11:54:36 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    pa (push a): Take the first element at the top of b and put it at the top of a. 
        Do nothing if b is empty.
    pb (push b): Take the first element at the top of a and put it at the top of b.
        Do nothing if a is empty.

    
    
        STACK A
        
            #####  <=   #####  <=   #####   <=  #####
            # 1 #       # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####   =>  #####
        
        STACK B
        
            #####  <=   #####  <=   #####   <=  #####
            # 1 #       # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####   =>  #####

    MOVE PA


        STACK A
        
            #####  <=   #####  <=   #####   <=  #####   <=  #####
            # 1 #       # 1 #       # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####   =>  #####   =>  #####
    
        STACK B
    
            #####  <=   #####  <=   #####
            # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####
*/

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/_types.h>
# include <unistd.h>

typedef struct s_node
{
	struct s_node	*prev;
	struct s_node	*next;
	int				data;
}					t_node;

