/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_break_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:26:53 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/23 19:00:32 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>
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

char *ft_itoa(int num)
{
	char *str;
	int len;

	len = ft_len_nbr(num);
  str = malloc(sizeof(char)*(len+1));
  str[len] = '\0';
	while (num > 0)
	{
		str[len-1] = num%10 + '0';
		num = num/10;
		len--;
	}
return str;
}

char	**ft_break_num(long num, char **num_array)
{
	int		i;
	int		ln;
	long	num_brk;
	char	*str;

	ln = ft_len_nbr(num);
	str = "abc";
	printf("ln: %i\n", ln);
	/* 											bloque que funciona antes del while, descomponiendo un número y pasándolo a char
	num_brk = num / ft_pow(10, ln - 1) * ft_pow(10, ln - 1);
	printf("num_brk: %li\n", num_brk);
	str = ft_itoa(num_brk);
	printf("str: %s\n", str);
	*/
	i = 0;
	while (i != (ln) && num > 20)
	{
		printf("num: %li\n", num);
		num_brk = (num / ft_pow(10, ln - 1 - i) * ft_pow(10, ln - 1 - i));
		num_array[i] = ft_itoa(num_brk);
		printf("num broke: %li\n", num_brk);
		num = num - (num_brk);
		i++;
	}
	num_array[i] = ft_itoa(num);
	num_array[i + 1] = "\0";
	/* 											ejemplo de escritura en el array antes de automatizarlo
	num_array[0] = "40";
	num_array[1] = "2";*/
	return (num_array);
}

int	main(void)
{
	long	num;
	int		negs;
	int		i;
	char	*num_array[37];

	num = -7814;
	if (num < 0)
	{
		num = -num;
		negs = -1;
	}
	printf("num: %li\n", num);
	ft_break_num(num, num_array);
	i = 0;
	while (num_array[i] != 0)
	{
		printf("%s\n", num_array[i]);
		i++;
	}
	return (0);
}