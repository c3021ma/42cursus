/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:54:33 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/27 16:42:24 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

int ft_max_numb(int n)
{
    int i;
    int max;

    i = 0;
    max = 1;
    while (i < n)
    {
        max = max * 10 ;
        i++;
    }
    return (i);
}

void ft_print_combn(int n)
{
    int     i;
    int     init;

    i = 0;
    init = 0;
    while (i < (ft_max_numb(n)))
    {
        init = i + '0';
        write (1, &init, 1);
        i++;
    }
    write (1, ", ", 2);
}

int main(void)
{
    ft_print_combn(6);
    return (0);
}