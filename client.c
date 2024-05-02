/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:28:08 by oumondad          #+#    #+#             */
/*   Updated: 2024/05/02 15:56:03 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_sig(pid_t pid, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (c & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c = c >> 1;
		i++;
		usleep(50);
	}
}

int	main(int ac, char **av)
{
	t_var	data;
	int		i;

	i = 0;
	if (ac != 3)
		ft_error("Error args not correct");
	data.pid = ft_atoi(av[1]);
	while (av[2][i])
	{
		send_sig(data.pid, av[2][i]);
		i++;
	}
	return (0);
}
