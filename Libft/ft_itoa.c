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
	int	len;

	while (num / 10)
	{
		ln++;
		num = num / 10;
	}
	len = len + 1;
	return (len);
}



char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	char	sp;

	sp = 0;
	if (n < 0)
		sp = -1;
	if (n == -2147483648)
	{
		n = (n + 1);
		sp = 1;
	}
	len = ft_len_nbr(n * sp) + (sp * sp);
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
	if (sp == 1)
		str[len] = "8";
	if (sp == -1)
		str[0] = 45;
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
