/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:27:06 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/03 22:30:36 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    pa (push a): Take the first element at the top of b and put it at the top of a. 
        Do nothing if b is empty.
    pb (push b): Take the first element at the top of a and put it at the top of b.
        Do nothing if a is empty.

    
    
        STACK B
        
            #####  <=   #####  <=   #####   <=  #####
            # 1 #       # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####   =>  #####
        
        STACK A
        
            #####  <=   #####  <=   #####   <=  #####
            # 1 #       # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####   =>  #####

    MOVE PB


        STACK B
        
            #####  <=   #####  <=   #####   <=  #####   <=  #####
            # 1 #       # 1 #       # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####   =>  #####   =>  #####
    
        STACK A
    
            #####  <=   #####  <=   #####
            # 2 #       # 3 #       # 4 #
            #####  =>   #####  =>   #####
*/