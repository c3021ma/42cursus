/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/25 10:11:19 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlong;
	unsigned int	srclong;
	unsigned int	i;

	destlong = ft_strlen(dest);
	srclong = ft_strlen(src);
	if (size <= destlong)
	{
		return (size + srclong);
	}
	i = 0;
	while ((i + destlong < size - 1) && (src[i] != '\0'))
	{
		dest[i + destlong] = src [i];
		i++;
	}
	dest[i + destlong] = '\0';
	return (destlong + srclong);
}

int	main(void)
{
	char				*dest;
	char				*src;
	char				s1[20] = "354368568568568568";
	char				s2[] = "abc";
	char				s1bis[20] = "354368568568568568";
	char				s2bis[] = "abc";
	unsigned int		size = 3;
	unsigned int		i;

	dest = s1;
	src = s2;
	printf("\nvalor dest s1: %s\n", dest);
	printf("valor src s2: %s\n", src);
	printf("valor size: %i\n", size);
	i = strlcat(dest, src, size);
	printf("\nvalor obtenido tras strlcat: %s\n", dest);
	printf("valor i tras strlcat: %i\n\n", i);
	dest = s1bis;
	src = s2bis;
	i = ft_strlcat(dest, src, size);
	printf("\nvalor obtenido tras función: %s\n", dest);
	printf("valor i tras función: %i\n", i);
	return (0);
}
