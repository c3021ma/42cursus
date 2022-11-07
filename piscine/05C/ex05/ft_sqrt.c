/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/26 21:02:38 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	result = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	while (result <= nb && i <= 46340)
	{
		result = (i * i);
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	nb;
	int	fact;

	nb = 46338*46339;
	fact = ft_sqrt(nb);
	printf("mi función: %i", fact);
	return (0);
}
