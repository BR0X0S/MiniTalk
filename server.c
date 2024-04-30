/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:22:15 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/30 17:22:32 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t   pid;

    pid = getpid();
    printf("my pid is : %d\n", pid);
    return(0);
}
