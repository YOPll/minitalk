/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 04:17:16 by yopi              #+#    #+#             */
/*   Updated: 2022/01/08 04:33:29 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(void)
{
    pid_t   procces;

    write(1, "Server PID", 10);
    procces = getpid();
    // print process here 
    write(1, "\n", 1);
    
}