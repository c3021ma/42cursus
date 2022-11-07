/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/13 17:49:00 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>
#include	<string.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int j;
	int	swap;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int		*tab;
	int		size;
	int		cadena[] = {6,7,83,2,76,5,9};
	int		i;

	tab = &cadena[0];
	size = 7;
	printf("\ncadena inicial = ");
	i = 0;
	while (i < size)
	{
		printf("%i,",tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	printf("cadena final =   ");
	i = 0;
	while (i < size)
	{
		printf("%i,",tab[i]);
		i++;
	}
	printf("\n.");
	return (0);
}
