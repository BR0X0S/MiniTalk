/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:22:15 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/30 19:53:39 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>
#include <unistd.h>
void hhh(int sig)
{
	if(sig == SIGUSR1)
		printf("1\n");
	else if(sig == SIGUSR2)
		printf("0\n");
}

int	main(void)
{
	t_var	data;

	data.pid = getpid();
	data.id = ft_itoa(data.pid);
	write(1, data.id, ft_strlen(data.id));
	write(1, "\n", 1);
	signal(SIGUSR1,hhh);
	signal(SIGUSR2,hhh);
	while(1);
	return (0);
}
