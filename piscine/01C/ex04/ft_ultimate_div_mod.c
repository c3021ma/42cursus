/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/13 17:43:51 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}

int	main(void)
{
	int	*pta;
	int	*ptb;
	int	a;
	int	b;

	a = 7;
	b = 2;
	pta = &a;
	ptb = &b;
	printf("\nvalores de a, b antes de función: %i / %i\n", a, b);
	ft_ultimate_div_mod(pta, ptb);
	printf("valores de a, b después de función: %i / %i\n", a, b);
	return (0);
}
