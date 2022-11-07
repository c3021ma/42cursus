/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/28 20:32:08 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
	if (nb == 2)
		return (3);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		if (nb % 2 == 0)
			i = nb + 1;
		else
			i = nb + 2;
		while (i <= 2147483647)
		{
			if (ft_is_prime(i) == 1)
				return (i);
		i = i + 2;
		}
	}
	return (2147483646);
}

int	main(void)
{
	int	nb;
	int	fact;

	nb = -4;
	fact = ft_find_next_prime(nb);
	printf("mi función: %i", fact);
	return (0);
}
