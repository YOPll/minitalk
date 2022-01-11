/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 04:17:16 by yopi              #+#    #+#             */
/*   Updated: 2022/01/11 03:00:00 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"
void	handlemsg(int sig)
{

}

int	main(void)
{
	pid_t	procces;
	struct sigaction	sig;
	
	write(1, "Server PID: ", 12);
	procces = getpid();
	ft_putnbr_fd(procces,1);
	write(1, "\n", 1);
	sig.sa_handler = &handlemsg;
	sigemptyset(&sig.sa_mask);
	sig.sa_flags = SA_RESTART;
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	
	while(1)
		pause();
	return (0);
}