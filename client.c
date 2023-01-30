/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalata <rgalata@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:17:30 by rgalata           #+#    #+#             */
/*   Updated: 2023/01/30 15:23:49 by rgalata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void ft_send_bit(int c, int pid, int bit)
{
    int i;

    i = 0;
    while (i < bit)
    {
        if (c % 2 == 1)
        {
            kill(pid, SIGUSR1);
            ft_printf("1");
        }
        else 
        {
            kill(pid, SIGUSR2);
            ft_printf("0");
        }
        c /= 2;
        i++;
        usleep(42);
    }
    ft_printf("\n");
}

int main(int ac, char **av)
{
    int i;
    int pids;
    if (ac != 3)
    {
        ft_printf("Error: wrong format.\n");
        ft_printf("Try: ./client <PID> <MESSAGE>\n");
        return (0);
    }
    pids = ft_atoi(av[1]);
    i = 0;    //ft_printf("\n");
    while(av[2][i])
    {
        ft_send_bit(av[2][i], pids, sizeof(char) * 8);
        i++;
    }
    return (0);
}