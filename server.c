/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <rgalata@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:17:39 by rgalata           #+#    #+#             */
/*   Updated: 2023/01/30 15:28:39 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void ft_handler(int sig)
{
    static int c;
    static int bit;

    if (bit < 7)
    {
        c += (sig == SIGUSR1) << bit;
        bit++;
    } else 
    {
        c += (sig == SIGUSR1) << bit;
        if (c)
            ft_printf("%c", c);
        c = 0;
        bit = 0;
    }
}

int main (int ac, char **av)
{
    (void)av;

    if (ac != 1)
    {
        ft_printf("Error: wrong format.\n");
        ft_printf("Try: ./server\n");
        return (0);
    }
    ft_printf("PID: %d\n", (int)getpid());
    while(1)
    {
        signal(SIGUSR1, ft_handler);
        signal(SIGUSR2, ft_handler);
    }
}