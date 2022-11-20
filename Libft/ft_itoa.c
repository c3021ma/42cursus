/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/20 11:38:49 by fmoreno-         ###   ########.fr       */
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

int	check_sp(int num)
{
	if (num == -2147483648)
		return (1);
	else
		return (0);
}

char	check_notpos(int num)
{
	if (num == 0)
		return ('0');
	else
		return (45);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_len_nbr(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (check_sp(n) == 1)
	{
		str[len - 1] = 8 + '0';
		n = n / 10;
		len--;
	}
	str[0] = check_notpos (n);
	n = abs(n);
	while (n > 0)
	{
		str[len - 1] = (n % 10 + '0');
		n = n / 10;
		len--;
	}
	return (str);
}
