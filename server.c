/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:22:15 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/30 17:59:22 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	t_var	data;

	data.pid = getpid();
	data.id = ft_itoa(data.pid);
	write(1, data.id, ft_strlen(data.id));
	write(1, "\n", 1);
	return (0);
}
