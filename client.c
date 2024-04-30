/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:28:08 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/30 17:58:08 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int ac, char **av)
{
	t_var	data;

	if (ac != 3)
		return (0);
	data.pid = ft_atoi(av[1]);
	printf("process id is :%d\n", data.pid);
	return (0);
}
