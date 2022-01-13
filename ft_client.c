/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <yopi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 04:20:08 by yopi              #+#    #+#             */
/*   Updated: 2022/01/11 03:20:00 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

void	ft_sendsig(char b_c, int pid)
{
	int		i;

	i = 7;
	while (i >= 0)
	{
		usleep(500);
		if (b_c >> i & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
	}
}

int	main(int ac, char *av[])
{
	int	pid;
	int	i;

	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		i = 0;
		while (av[2][i])
		{
			ft_sendsig(av[2][i], pid);
			i++;
		}
	}
	else
		return (0);
}
