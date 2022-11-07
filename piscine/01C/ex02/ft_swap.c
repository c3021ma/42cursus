/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/13 17:38:38 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{
	int	*pta;
	int	*ptb;
	int	a;
	int	b;

	a = 6;
	b = 2;
	pta = &a;
	ptb = &b;
	printf("\nvalores a y b antes de la función: %d, %d\n", *pta, *ptb);
	ft_swap(pta, ptb);
	printf("valores de a y b después de la función: %d, %d\n", *pta, *ptb);
	return (0);
}
