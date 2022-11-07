/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/21 19:35:14 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				total;

	i = 0;
	total = 0;
	while (total == 0 && (s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		total = total + s1[i] - s2[i];
		i++;
	}
	return (total);
}

int	main(void)
{
	char				s1[] = "adfadgadsgasgr";
	char				s2[] = "adfadgadsgasg";
	unsigned int		n = 30;

	printf("\nvalor origen s1: %s\n", s1);
	printf("valor destino s2: %s\n", s2);
	n = strncmp(s1, s2, n);
	printf("\nvalor obtenido tras strncmp: %i\n", n);
	n = ft_strncmp(s1, s2, n);
	printf("\nvalor obtenido tras función: %i\n", n);
	return (0);
}
