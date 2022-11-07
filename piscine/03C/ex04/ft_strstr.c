/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/27 11:33:19 by fmoreno-         ###   ########.fr       */
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

int ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	total;
	int		len;

	i = 0;
	total = 0;
	len = ft_strlen(s1);
	while (total == 0 && (s1[i] != '\0' || s2[i] != '\0') && i < len)
	{
		total = total + s1[i] - s2[i];
		i++;
	}
	return (total);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = "";
	if (*to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (ft_strcmp(to_find, &str[i]) == 0)
		{
			ptr = &str[i];
			return (ptr);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "aaaaaa4a";
	char	to_find[] = "";
	char	*ptr;

	printf("\nvalor origen s1: %s\n", str);
	printf("valor destino s2: %s\n", to_find);
	ptr = strstr(str, to_find);
	printf("\nvalor obtenido tras strstr: %s\n", ptr);
	ptr = ft_strstr(str, to_find);
	printf("valor obtenido tras función: %s\n", ptr);
	return (0);
}
