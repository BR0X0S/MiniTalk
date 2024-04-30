/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:28:08 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/30 19:51:05 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void biny(char c, pid_t pid)
{
	int i = 0;
	while(i < 8)
	{
		if(c & 128)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i++;
		c = c << 1;
		usleep(50);
	}
}

int	main(int ac, char **av)
{
	t_var	data;

	int i = 0;
	if (ac != 3)
		ft_error("Error : argument not correct\n");
	data.pid = ft_atoi(av[1]);
	printf("process id is :%d\n", data.pid);


	//.CLEAN 65236536 "SBA"
	
	while (av[2][i])
	{
		biny(av[2][i], data.pid);
		i++;
	}
	return (0);
}
