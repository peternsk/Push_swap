/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:46:24 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/03 14:50:50 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    rra (rotate a): Shift down all elements of stack a by 1.
		The first element becomes the last one.
    rrb (rotate b): Shift down all elements of stack b by 1.
		The first element becomes the last one.

        STACK A
        
            #####  <=   #####  <=   #####   <=  #####
            # 1 #       # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####   =>  #####
        
        STACK A
        
            #####  <=   #####  <=   #####   <=  #####
            # 4 #       # 1 #       # 2 #       # 3 #
            #####  =>   #####  =>   #####   =>  #####
*/