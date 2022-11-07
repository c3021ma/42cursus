/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/14 11:17:34 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char			*str;
	char			alfanum[] = "ABSFDSdfsdidf DFS ksdfs_MNOPQRuSTUVWXYZ";
	char			distintos[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZa";
	char			vacio[] = "";

	str = &alfanum[0];
	printf("\nvalor origen: %s", str);
	str = ft_strupcase(str);
	printf("\nvalor tras func: %s", str);
	str = &distintos[0];
	printf("\nvalor origen: %s", str);
	str = ft_strupcase(str);
	printf("\nvalor tras func: %s", str);
	str = &vacio[0];
	printf("\nvalor origen: %s", str);
	str = ft_strupcase(str);
	printf("\nvalor tras func: %s", str);
	return (0);
}
