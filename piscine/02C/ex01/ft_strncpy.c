/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/19 11:55:11 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char					*dest;
	char					*src;
	char					origen[] = "cadena";
	char					destino[] = "eliminación";
	unsigned int			n;

	dest = &destino[0];
	src = &origen[0];
	n = 5;
	printf("\nvalor origen inicial: %s\n", origen);
	printf("valor destino inicial: %s\n", destino);
	printf("valor de longitud: %u\n", n);
	ft_strncpy(dest, src, n);
	printf("\nvalor origen tras func: %s\n", origen);
	printf("valor destino tras func: %s\n", destino);
	dest = &destino[0];
	src = &origen[0];
	strncpy(dest, src, n);
	printf("\nvalor origen tras strncpy: %s\n", origen);
	printf("valor destino tras strncpy: %s\n", destino);
	return (0);
}
