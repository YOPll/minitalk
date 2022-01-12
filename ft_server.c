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

int		t;

int		bi_conv(int pos)
{
	int	base;
	int ret;

	if(!pos)
		return(1);
	base = 2;
	ret = 2;
	while(pos > 1)
	{
		ret *= base;
		pos--;
	}
	return(ret);
}

void	handle(int sig, siginfo_t *data, void *empty)
{
	static int	pos = 7;
	static int	sum = 0;
	
	(void)empty;
	if (t != data->si_pid)
	{
		sum = 0;
		pos = 7;
	}
	if(sig == SIGUSR1)
	{
		sum += bi_conv(pos);
		pos--;
	}
	else
		pos--;
	if (pos == -1)
	{
		write(1, &sum, 1);
		pos = 7;
		sum = 0;
	}
	t = data->si_pid;
}

int	main(void)
{
	pid_t	procces;
	struct sigaction	sig;
	
	write(1, "Server PID: ", 12);
	procces = getpid();
	ft_putnbr_fd(procces,1);
	write(1, "\n", 1);
	//
	sig.sa_handler = handle;
	sigemptyset(&sig.sa_mask);
	sig.sa_flags = SA_RESTART;
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	while(1)
		pause();
	return (0);
}