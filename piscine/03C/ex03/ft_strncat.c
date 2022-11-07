/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/21 19:37:15 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < nb && src[j] != '\0')
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
	char				dest[10] = "12345";
	char				src[] = "efgh";
	char				dest_ft[10] = "67890";
	char				src_ft[] = "cdab";
	unsigned int		nb =2;

	printf("\nvalor origen s1: %s\n", src);
	printf("valor destino s2: %s\n", dest);
	printf("valor nb: %i\n", nb);
	strncat(dest, src, nb);
	printf("\nvalor obtenido tras strncmp: %s\n", dest);
	ft_strncat(dest_ft, src_ft, nb);
	printf("\nvalor obtenido tras función: %s\n", dest_ft);
	return (0);
}
