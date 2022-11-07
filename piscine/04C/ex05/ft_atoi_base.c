/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:26:53 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/25 21:32:58 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

int	ft_isspace(char str)
{
	if ((str == 32) || (str >= 9 && str <= 13))
		return (1);
	else
		return (0);
}

int	ft_is_sign(char str)
{
	if (str == '+')
		return (1);
	if (str == '-')
		return (-1);
	return (0);
}

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_error(char *base)
{
	int		i;
	int		j;

	if (base[0] == '\0' || ft_strlen(base) == 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j + i])
				return (0);
			printf ("base i: %c, base j: %c\n", base[i], base[j]);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	isnum;
	int	sign;

	if (ft_check_error(base) == 1)
	{
		i = 0;
		
		while (ft_isspace(str[i]))
			i++;
		sign = 1;
		while (ft_is_sign(str[i]))
		{
			sign = sign * ft_is_sign(str[i]);
			i++;
		}
		isnum = 0;
		while (str[i] >= '0' && str[i] <= '9')
		{
			isnum = isnum * 10 + str[i] - '0';
			i++;
		}
		return (isnum * sign);
	}
	return (0);
}

int	main(void)
{
	char	*str;
	char	*base = "0123456889ABCDEF";
	
	str = "\t -----+-+123o4ab567";
	printf ("base: %s\n", base);
	printf ("con mi función: %i\n", ft_atoi_base(str, base));
	return (0);
}