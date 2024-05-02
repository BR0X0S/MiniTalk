/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:22:15 by oumondad          #+#    #+#             */
/*   Updated: 2024/05/02 18:27:27 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_var	g_data;

int	po2(int y)
{
	int	total;

	total = 2;
	if (y == 0)
		return (1);
	while (y > 1)
	{
		total = total * 2;
		y--;
	}
	return (total);
}

int	ft_btod(char *str)
{
	int	y;
	int	total;

	y = 0;
	total = 0;
	while (y < 8)
	{
		if (str[y] == '1')
			total = total + po2(y);
		y++;
	}
	return (total);
}

void	recieve_sig(int sig)
{
	int	c;

	if (g_data.s == 8)
		g_data.s = 0;
	if (sig == SIGUSR1)
	{
		g_data.binary[g_data.s] = '1';
		g_data.s++;
	}
	if (sig == SIGUSR2)
	{
		g_data.binary[g_data.s] = '0';
		g_data.s++;
	}
	if (g_data.s == 8)
	{
		c = ft_btod(g_data.binary);
		write(1, &c, 1);
	}
}

int	main(void)
{
	t_var	data;

	data.pid = getpid();
	data.id = ft_itoa(data.pid);
	write(1, data.id, ft_strlen(data.id));
	write(1, "\n", 1);
	g_data.binary = malloc(9);
	g_data.binary[8] = '\0';
	g_data.s = 0;
	signal(SIGUSR1, recieve_sig);
	signal(SIGUSR2, recieve_sig);
	while (1)
		;
	return (0);
}
