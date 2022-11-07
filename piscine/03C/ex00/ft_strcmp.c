/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/21 19:33:50 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>

int ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (total == 0 && (s1[i] != '\0' || s2[i] != '\0'))
	{
		total = total + s1[i] - s2[i];
		i++;
	}
	return (total);
}

int	main(void)
{
	char	s1[] = "r";
	char	s2[] = "";
	int		n;

	printf("\nvalor origen s1: %s\n", s1);
	printf("valor destino s2: %s\n", s2);
	n = strcmp(s1, s2);
	printf("\nvalor obtenido tras strcmp: %i\n", n);
	n = ft_strcmp(s1, s2);
	printf("\nvalor obtenido tras función: %i\n", n);
	return (0);
}
