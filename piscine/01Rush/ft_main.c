/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:00:15 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/20 11:04:33 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	pinta_matriz_de_4(void)
{
	int		row;
	int		col;
	int		size;
	int		matriz[4][4];

	row = 0;
	size = 4;
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
}

void	actualiza_matriz(void)
{
	int		row;
	int		col;
	int		size;
	int		matriz[4][4];

	row = 0;
	size = 4;
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
}

int	*maximos_por_vista (int vista)
{
	int		*linea;
	int		col;
	int		resta;

	col = 0;
	linea = malloc(4 * 4);
	resta = vista - 1;
	printf("vista\n %i", vista);
	while (resta != 0)
	{
		linea[col] = 4 - resta;
		printf("%i", linea[col]);
		col++;
		resta--;
	}
	while (col < 4)
	{
		linea[col] = 4;
		printf("%i", linea[col]);
		col++;
	}
	printf("\n");
	return (linea);
}

int	**cambia_vista(char *entrada)
{
	int	col;
	int	pos;
	int	**matrix;

	pos = 0;
	matrix = malloc(4 * 4);
	*matrix = malloc(4 * 4);
	while (pos >= 8 && pos < 12)
	{
		col = 0;
		while (col < 4)
		{
			matrix[pos - 8][col] = maximos_por_vista(entrada[pos])[col];
			col++;
		}
		pos++;
	}
	printf("matrix: %i", matrix[0][1]);
	return (matrix);
}

char	*breakargs (char *argumentos)
{
	int 	i;
	int		j;

	i = 0;
	j = 0;
	//printf("argumentos en funcion: %s\n", argumentos);
	while (argumentos[i] != '\0')
	{
		if (argumentos[i] >= '1' && argumentos[i] <= '4' && j < 16)
		{
			argumentos[j] = argumentos[i];
			j++;
			i++;
		}
		else if (j == 16)
		{
			printf("cogeremos los 16 primeros valores de 1 a 4\n");
			break ;
		}
		else
		{
			i++;
		}
	}
	argumentos[j] = '\0';
	//printf("matriz en funcion: %s\n", argumentos);
	return (argumentos);
}

int	main(int argc, char **argv)
{
	int 	i;
	int		j;
	char	*entrada;
	int		*matrix_primera;

  	i = argc;
	entrada = "";
	if (i > 2)
	{
		printf("error. muchos argumentos\n");
	}
	else
	{
		entrada = breakargs(argv[1]);
		printf("entrada: %s\n", entrada);
		j = 0;
		while (breakargs(argv[1])[j] != '\0')
		{
			entrada[j] = breakargs(argv[1])[j];
			j++;
		}
		entrada[j] = '\0';
		printf("entrada tras función argv: %s\n", entrada);
		pinta_matriz_de_4();
	}
	matrix_primera = *cambia_vista(entrada);
	return (0);
}