/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:22:33 by oumondad          #+#    #+#             */
/*   Updated: 2024/05/20 15:05:56 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <signal.h>
# include <sys/types.h>

typedef struct s_var
{
	int		i;
	int		sign;
	long	result;
	pid_t	pid;
	char	*id;
	int		s;
	char	*binary;
}	t_var;

int		ft_atoi(char *str);
char	*ft_itoa(int nb);
size_t	ft_strlen(char *str);
void	ft_error(char *str);

#endif