/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/14 10:50:15 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_str_is_alpha(char *str)
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
		else if (str[i] >= 'A' && str[i] <= 'Z')
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
	char			alfanum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char			distintos[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ*";
	char			vacio[] = "";
	int				n;

	str = &alfanum[0];
	printf("\nvalor origen: %s", str);
	n = ft_str_is_alpha(str);
	printf("\nresultado: %i\n", n);
	str = &distintos[0];
	printf("\nvalor origen: %s", str);
	n = ft_str_is_alpha(str);
	printf("\nresultado: %i\n", n);
	str = &vacio[0];
	printf("\nvalor origen: %s", str);
	n = ft_str_is_alpha(str);
	printf("\nresultado: %i\n", n);
	return (0);
}
