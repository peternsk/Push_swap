/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 00:56:28 by peternsaka        #+#    #+#             */
/*   Updated: 2023/11/02 01:05:56 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	All the logics bihind small numbers algorithm.
    
        ##### 
        # 1 #   if the stack only holdsone node. return the node and free all
        ##### 

        #####  <=   #####	if the stack holds two nodes.
        # 2 #       # 1 #	first verify if it's sorted. if it is return the stack. 
        #####  =>   #####	else. swap the stack and return it.

		#####  <=   #####  <=   #####
        # 2 #       # 1 #       # 3 #
        #####  =>   #####  =>   #####


        ==> Data switch
*/