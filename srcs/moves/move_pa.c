/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:33:33 by pnsaka            #+#    #+#             */
/*   Updated: 2023/11/02 01:23:06 by peternsaka       ###   ########.fr       */
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

