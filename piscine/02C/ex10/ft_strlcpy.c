/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/19 11:57:24 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1)
		{
			if (src[i] != '\0')
			{
				dest[i] = src[i];
			}
			else
			{
				dest[i] = '\0';
			}
			i++;
		}
		dest[i] = '\0';
		i = 0;
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char			*dest;
	char			*src;
	char			origen[] = "cadena";
	char			destino[] = "eliminación";
	unsigned int	size;
	unsigned int	n;

	dest = &destino[0];
	src = &origen[0];
	size = 7;
	printf("\nvalor origen inicial: %s\n", origen);
	printf("valor destino inicial: %s\n", destino);
	printf("valor de size: %u\n", size);
	n = ft_strlcpy(dest, src, size);
	printf("\nvalor origen tras func: %s\n", origen);
	printf("valor destino tras func: %s\n", destino);
	printf("valor long origen: %i\n", n);
	dest = &destino[0];
	src = &origen[0];
	n = strlcpy(dest, src, size);
	printf("\nvalor origen tras strlcopy: %s\n", origen);
	printf("valor destino tras strlcopy: %s\n", destino);
	printf("valor long origen: %i\n", n);
	return (0);
}
