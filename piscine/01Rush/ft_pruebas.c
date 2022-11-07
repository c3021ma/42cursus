/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pruebas.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:00:15 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/20 10:44:59 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		row;
	int		col;
	int		size;
	int		matriz[4][4];

	row = 0;
	size = 4;
	printf("size: %i\n", size);
	while (row < size)
	{	
		col = 0;
		while (col < size)
		{
			matriz[row][col] = size;
			printf("%i", matriz[row][col]);
			col++;
		}
		printf("\n");
		row++;
	}
	return (0);
}
