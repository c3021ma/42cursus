/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/17 20:49:26 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*dest;
	char	*src;
	char	origen[] = "cadena";
	char	destino[] = "eliminación";

	dest = &destino[0];
	src = &origen[0];
	printf("\nvalor origen inicial: %s\n", origen);
	printf("valor destino inicial: %s\n", destino);
	ft_strcpy(dest, src);
	printf("\nvalor origen tras func: %s\n", origen);
	printf("valor destino tras func: %s\n", destino);
	return (0);
}
