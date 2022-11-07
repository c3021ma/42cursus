/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/25 10:18:58 by fmoreno-         ###   ########.fr       */
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

int	main(void)
{
	char				*str;
	char				cadena1[20] = "\n";
	char				cadena1bis[20] = "\n";
	unsigned int		i;

	str = cadena1;
	printf("\nvalor str: %s\n", str);
	i = strlen(str);
	printf("valor i tras original: %i\n\n", i);
	str = cadena1bis;
	printf("\nvalor str: %s\n", str);
	i = ft_strlen(str);
	printf("valor i tras original: %i\n\n", i);
	return (0);
}
