/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/13 17:30:40 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	*nbrp;
	int	a;

	nbrp = &a;
	printf("\nvalor del puntero sin valor: %d \n", *nbrp);
	a = 12;
	printf("valor del puntero con a = 12: %d\n", *nbrp);
	*nbrp = 3;
	printf("valor del puntero con puntero = 3: %d\n", *nbrp);
	ft_ft(nbrp);
	printf("valor del puntero tras la función: %d\n", *nbrp);
	return (0);
}
