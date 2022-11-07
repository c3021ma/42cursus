/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:50:45 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/12 10:39:33 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

void	ft_putchar(char x, char y);

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar(a / 10 + 48, a % 10 + 48);
			write (1, " ", 1);
			ft_putchar(b / 10 + 48, b % 10 + 48);
			if (a != 98)
			{
				write (1, ", ", 2);
			}
			else
			{
				write (1, "", 0);
			}
			b++;
		}
		a++;
	}
}

void	ft_putchar(char x, char y)
{
	write (1, &x, 1);
	write (1, &y, 1);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
