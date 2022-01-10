/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 04:17:16 by yopi              #+#    #+#             */
/*   Updated: 2022/01/09 01:45:14 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"
void	handlemsg()
{

}

int	main(void)
{
    pid_t	procces;
    struct sigaction	sa;
	
	sa.sa_handler = &handlemsg;
	sa.sa_flags = SA_RESTART;
    write(1, "Server PID: ", 12);
    procces = getpid();
    ft_putnbr_fd(procces,1);
    write(1, "\n", 1);
}