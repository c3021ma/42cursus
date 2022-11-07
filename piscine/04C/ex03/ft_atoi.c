/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:26:53 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/25 17:52:50 by fmoreno-         ###   ########.fr       */
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

int	ft_is_num(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	isnum;
	int	sign;

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
	while (ft_is_num(str[i]))
	{
		isnum = isnum * 10 + str[i] - '0';
		i++;
	}
	return (isnum * sign);
}

int	main(void)
{
	char	*str;
	str = "\t ---k-+--+1234ab567";
	printf ("con mi función: %i\n", ft_atoi(str));
	printf ("con atoi: %i\n", atoi(str));
	return (0);
}