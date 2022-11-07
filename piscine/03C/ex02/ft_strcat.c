/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/21 19:36:29 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>

char *ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char				dest[10] = "123";
	char				src[] = "abcdef";
	char				dest_ft[10] = "456";

	printf("\nvalor origen s1: %s\n", src);
	printf("valor destino s2: %s\n", dest);
	strcat(dest, src);
	printf("\nvalor obtenido tras strncmp: %s\n", dest);
	ft_strcat(dest_ft, src);
	printf("\nvalor obtenido tras función: %s\n", dest_ft);
	return (0);
}
