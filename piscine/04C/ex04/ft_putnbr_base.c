/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:26:53 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/28 09:37:24 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_error(char *base)
{
	int		i;
	int		j;

	if (base[0] == '\0' || ft_strlen(base) == 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j + i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	a;
	int	len;

	if (ft_check_error(base) == 1)
	{
		len = ft_strlen(base);
		a = 0;
		if (nbr / len)
		{
			a = a * len + nbr % len;
			if (a < 0)
				a = -a;
			ft_putnbr_base(nbr / len, base);
		}
		else
		{
			a = nbr;
			if (a < 0)
			{
				write (1, "-", 1);
				a = -a;
			}
		}
		write (1, &base[a], 1);
	}
}

int	main(void)
{
	char	*base = "0123456789ABCDEF";
	int		nbr = 19;

	printf ("base: %s\n", base);
	printf ("número: %i\n", nbr);
	ft_putnbr_base(nbr, base);
	return (0);
}