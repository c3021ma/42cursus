/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/17 19:40:19 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_nbr(int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len++;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	char	sp;

	sp = 0;
	if (n == -2147483648)
	{
		n = (n + 1);
		sp = 1;
	}
	len = ft_len_nbr(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = 45;
		n = -n;
	}
	if (sp == 1)
	{
		str[len - 1] = 8 + '0';
		sp = 0;
		n = n / 10;
		len--;
	}
	while (n > 0)
	{
		str[len - 1] = (n % 10 + '0');
		n = n / 10;
		len--;
	}
	return (str);
}
/*
int	main(void)
{
	int	n;

	n = -2147483648;
	ft_itoa(n);
	return (0);
}
*/