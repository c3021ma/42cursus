/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:26:53 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/11 22:02:30 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

void	ft_putchar(char a);

void	ft_putnbr(int nb)
{
	char	a;

	if (nb / 10)
	{
		a = nb % 10;
		if (a < 0)
		{
			a = -a;
		}
		ft_putnbr(nb / 10);
	}
	else
	{
		a = nb;
		if (a < 0)
		{
			write (1, "-", 1);
			a = -a;
		}
	}
	ft_putchar (a + '0');
}

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}
