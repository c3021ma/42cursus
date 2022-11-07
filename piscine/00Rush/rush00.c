/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:41:17 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/10 17:48:45 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	g_nc = 2;
int	g_nf = 2;

void	head(int x, int g_nc)
{
	ft_putchar('o');
	if (x > 1)
	{
		while (g_nc < x)
		{
			ft_putchar('-');
			g_nc++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	body(int x, int g_nc)
{
	ft_putchar('|');
	if (x > 1)
	{
		while (g_nc < x)
		{
			ft_putchar(' ');
			g_nc++;
		}
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "error\n", 6);
	}
	else if (y == 1)
	{
		head(x, g_nc);
	}
	else if (y == 2)
	{
		head(x, g_nc);
		head(x, g_nc);
	}
	else
	{
		head(x, g_nc);
		while (g_nf < y)
		{
			body(x, g_nc);
			g_nf++;
		}
		head(x, g_nc);
	}
}
