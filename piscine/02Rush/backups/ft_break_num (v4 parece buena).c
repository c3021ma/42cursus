/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_break_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:26:53 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/24 15:08:35 by fmoreno-         ###   ########.fr       */
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

char	**ft_break_num(unsigned long num, char **num_array)
{
	int				i;
	int				ln;
	unsigned long	num_brk;
	char			*str;

	ln = ft_len_nbr(num);
	str = "abc";
	i = 0;
	while (i != ln && num > 20)
	{
		num_brk = (num / ft_pow(10, ln - 1 - i) * ft_pow(10, ln - 1 - i));
		num_array[i] = ft_itoa(num_brk / (ft_pow(10, (ft_len_nbr(num_brk) - 1))));
		if ((ft_len_nbr(num_brk)) % 3 == 0)
		{
			i++;
			ln = ln + 1;
			if (i > 0 && num_array[i - 1][0] == '\0')
			{
				printf("es 0: %s\n", num_array[i - 1]);
				num_array[i] = "";
			}
			else if (i > 0 && num_array[i - 1][0] <= '1')
			{
				num_array[i - 1][0] = '\0';
				num_array[i] = ft_itoa(100);
			}
			else
			{
				num_array[i - 1][1] = '\0';
				num_array[i] = ft_itoa(100);
			}
		}
		else if ((ft_len_nbr(num_brk) - 1) % 3 == 0)
		{
			i++;
			ln = ln + 1;
			if (i > 1 && num_array[i - 2][0] == '1')
			{
				num_array[i - 2][1] = num_array[i - 1][0];
				num_array[i - 1][0] = '\0';
				i--;
			}
			else if (i > 0 && num_array[i - 1][0] <= '1')
			{
				num_array[i - 1][0] = '\0';
			}
			else
			{
				num_array[i - 1][1] = '\0';
			}
			num_array[i] = ft_itoa((ft_pow(1000, (ft_len_nbr(num_brk) - 1) / 3)));
		}
		num = num - (num_brk);
		i++;
	}
	if (num == 10)
		{
			printf("es 10: %s\n", num_array[i - 1]);
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
	unsigned long	num;
	int			negs;
	int			i;
	char		*num_array[37];

	num = 7499999999;
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
	while (num_array[i] != 0 && i < 37)
	{
		printf("%s\n", num_array[i]);
		i++;
	}
	return (0);
}