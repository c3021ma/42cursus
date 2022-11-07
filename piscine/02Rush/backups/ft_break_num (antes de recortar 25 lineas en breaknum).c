/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_break_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:26:53 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/23 21:06:32 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;
	int				n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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

int	ft_len_nbr(int num)
{
	int	ln;

	ln = 0;
	if (num != 0)
	{
		while (num / 10)
		{
			ln++;
			num = num / 10;
		}
		ln = ln + 1;
		return (ln);
	}
	return (0);
}

int	ft_pow(int num, int pow)
{
	int result;

	if (pow <= 0)
	{
		return (1);
	}
	else
	{
		return (num * ft_pow(num, pow - 1));
	}
	return (result);
}

char	*ft_itoa(int num)
{
	char	*str;
	int		len;

	len = ft_len_nbr(num);
	str = malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	while (num > 0)
	{
		str[len - 1] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	return (str);
}

char	**ft_break_num(long num, char **num_array)
{
	int		i;
	int		ln;
	long	num_brk;
	char	*str;

	ln = ft_len_nbr(num);
	str = "abc";
	i = 0;
	while (i != ln && num > 20)
	{
		num_brk = (num / ft_pow(10, ln - 1 - i) * ft_pow(10, ln - 1 - i));
		num_array[i] = ft_itoa(num_brk);
		/*if (num_brk > 99 && num_brk < 1000)
		{
			num_array[i] = ft_itoa(num_brk / 100);
			num_array[i + 1] = "100";
			ln = ln + 1;
			i++;
		}
		if (num_brk > 999 && num_brk < 10000)
		{
			num_array[i] = ft_itoa(num_brk / 1000);
			num_array[i + 1] = "1000";
			ln = ln + 1;
			i++;
		}
		if (num_brk > 9999 && num_brk < 100000)
		{
			num_array[i] = ft_itoa(num_brk / 10000);
			num_array[i + 1] = "10000";
			ln = ln + 1;
			i++;
		}
		if (num_brk > 99999 && num_brk < 1000000)
		{
			num_array[i] = ft_itoa(num_brk / 100000);
			num_array[i + 1] = "100000";
			ln = ln + 1;
			i++;
		}*/
		num = num - (num_brk);
		i++;
	}
	num_array[i] = ft_itoa(num);
	while (i < 36)
	{
		num_array[i + 1] = "\0";
		i++;
	}
	return (num_array);
}

int	main(void)
{
	long	num;
	int		negs;
	int		i;
	char	*num_array[37];

	num = 756;
	if (num < 0)
	{
		num = -num;
		negs = -1;
	}
	if (num == 0)
	{
		num_array[0] = "0";
		i = 1;
		while (i < 36)
		{
			num_array[i] = "\0";
			i++;
		}
	}
	else
	{
		ft_break_num(num, num_array);
	}
	printf("num: %li\n", num);
	i = 0;
	while (num_array[i] != 0 && i < 15)
	{
		printf("%s\n", num_array[i]);
		i++;
	}
	return (0);
}