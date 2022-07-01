/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:13:23 by khovakim          #+#    #+#             */
/*   Updated: 2022/07/01 12:28:56 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include "libft.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	send_text(int pid, char *msg)
{
	size_t	shl;
	size_t	len;
	size_t	index;

	len = ft_strlen(msg);
	index = -1;
	while (msg[++index])
	{
		shl = -1;
		while (++shl < 8)
		{
			if ((msg[index] >> shl) & 1)
			{
				if (kill(pid, SIGUSR1) < 0)
					ft_error();
			}
			else
				if (kill(pid, SIGUSR2) < 0)
					ft_error();
			usleep(100);
		}
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid < 0)
			ft_error();
		send_text(pid, argv[2]);
		write(1, "\n", 1);
		ft_putstr_fd("byte of text :  ", 1);
		ft_putnbr_fd(ft_strlen(argv[2]), 1);
		write(1, "\n", 1);
	}
	else
		ft_putendl_fd("client want ID massage:", 1);
	return (0);
}
