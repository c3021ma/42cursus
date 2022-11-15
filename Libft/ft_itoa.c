/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/15 20:27:53 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_nbr(int num)
{
	int	ln;

	ln = 0;
	if (num == -2147483648)
		return (10);
	if (num < 0)
		num = num * -1;
	while (num / 10)
	{
		ln++;
		num = num / 10;
	}
	ln = ln + 1;
	return (ln);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	char	sign;

	sign = 0;
	len = ft_len_nbr(n);
	if (n < 0)
	{
		sign = 45;
		len = len + 1;
	}
	printf("len %i\n", len);
	str = ft_calloc(len + 1, sizeof(char));
	while (len > 0)
	{
		str[len] = n % 10 + '0';
		printf("n %i\n", n);
		printf("char %c", str[len]);
		n = n / 10;
		len--;
	}
	if (sign == 45)
		str[0] = sign;
	printf("char %c", str[0]);
	return (str);
}

int	main(void)
{
	int	n;

	n = -543;
	ft_itoa(n);
	return (0);
}
