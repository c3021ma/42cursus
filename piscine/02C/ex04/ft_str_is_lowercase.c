/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/14 10:54:03 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;
	int				n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			n = 1;
		}
		else
		{
			n = 0;
			break ;
		}
		i++;
	}
	return (n);
}

int	main(void)
{
	char			*str;
	char			alfanum[] = "abcdefghijklmnopqrstuvwxyz";
	char			distintos[] = "abcdefghijklmnopqrstuvwxyzA";
	char			vacio[] = "";
	int				n;

	str = &alfanum[0];
	printf("\nvalor origen: %s", str);
	n = ft_str_is_lowercase(str);
	printf("\nresultado: %i\n", n);
	str = &distintos[0];
	printf("\nvalor origen: %s", str);
	n = ft_str_is_lowercase(str);
	printf("\nresultado: %i\n", n);
	str = &vacio[0];
	printf("\nvalor origen: %s", str);
	n = ft_str_is_lowercase(str);
	printf("\nresultado: %i\n", n);
	return (0);
}
