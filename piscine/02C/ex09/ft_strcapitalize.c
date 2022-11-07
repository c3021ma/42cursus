/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/18 16:26:38 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_str_alp(char *str)
{
	int	n;

	n = 0;
	if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
	{
		n = 1;
	}
	else if (*str >= '0' && *str <= '9')
	{
		n = 1;
	}
	return (n);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 'a' + 'A';
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_str_alp(&str[i - 1]) == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		else if (ft_str_alp(&str[i - 1]) == 1 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char			*str;
	char			alfanum[] = "hoLa 4hoLa 4HoLa *hoLa /HoLa";
	char			distintos[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char			vacio[] = "";

	str = &alfanum[0];
	printf("\nalternativa origen: %s\n", str);
	str = ft_strcapitalize(str);
	printf("alternativa tras func: %s\n", str);
	str = &distintos[0];
	printf("ejemplo origen: %s\n", str);
	str = ft_strcapitalize(str);
	printf("ejemplo tras func: %s\n", str);
	str = &vacio[0];
	printf("vacío origen: %s\n", str);
	str = ft_strcapitalize(str);
	printf("vacío tras func: %s\n", str);
	return (0);
}
