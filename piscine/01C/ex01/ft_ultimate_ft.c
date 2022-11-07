/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/13 17:36:11 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	*nbr1;
	int	**nbr2;
	int	***nbr3;
	int ****nbr4;
	int *****nbr5;
	int	******nbr6;
	int	*******nbr7;
	int ********nbr8;
	int *********nbr9;
	int	a;

	nbr1 = &a;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	printf("\nvalor del puntero 1: %d\n", *nbr1);
	printf("valor de la dirección del puntero 2: %p\n", nbr2);
	printf("valor de a antes de la función: %i\n", a);
	ft_ultimate_ft(nbr9);
	printf("valor de a después de la función: %i\n", a);
	return (0);
}