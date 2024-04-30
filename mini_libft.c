/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:22:58 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/30 17:33:38 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void    ft_error(char *str)
{
    write(2, str, ft_strlen(str));
    exit(1);
}

int	ft_atoi(char *str)
{
	t_var	data;

	data.i = 0;
	data.sign = 1;
	data.result = 0;
	if ((str[0] == '-' && str[1] == '\0') || (str[0] == '+' && str[1] == '\0'))
		ft_error("Error\n");
	if (str[data.i] == '-' || str[data.i] == '+')
	{
		if (str[data.i] == '-')
			data.sign = -1;
		data.i++;
	}
	while ((str[data.i] >= '0' && str[data.i] <= '9'))
	{
		data.result = data.result * 10 + (str[data.i] - '0');
		data.i++;
	}
	if (str[data.i])
		ft_error("Error\n");
	data.result *= data.sign;
	if (data.result > INT_MAX || data.result < INT_MIN)
		ft_error("Error\n");
	return (data.result);
}

int	nb_len(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		nb = nb * -1;
		i++;
	}
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	char	*s_nb;
	int		len;

	len = nb_len(nb);
	s_nb = malloc (len + 1);
	if (!s_nb)
		ft_error("Error : itoa allocation faild");
	if (nb == 0)
		s_nb[0] = '0';
	if (nb < 0)
	{
		s_nb[0] = '-';
		nb *= -1;
	}
	s_nb[len] = '\0';
	while (len)
	{
		len--;
		s_nb[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s_nb);
}
