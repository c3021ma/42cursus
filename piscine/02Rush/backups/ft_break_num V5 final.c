/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_break_num V5 final.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:26:53 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/24 21:43:20 by fmoreno-         ###   ########.fr       */
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

char	**ft_draw_array_of_chars(unsigned long num, char **num_array)
{
	int				i;
	int				ln;
	unsigned long	num_brk;
	char			*str;

	ln = ft_len_nbr(num);
	printf("ln%i\n", ln);
	str = "abc";
	i = 0;
	while (i < ln * 2)
	{
		num_brk = (num / ft_pow(10, ln - 1 - i / 2));
		num = num - (num_brk) * ft_pow(10, ln - 1 - i / 2);
		if (num_brk == 0)
		{
			num_array[i] = "0";
		}
		else
		{
			num_array[i] = ft_itoa(num_brk);
		}
		i++;
		num_array[i] = ".";
		i++;
	}
	while (i < 37)
	{
		num_array[i] = "\0";
		i++;
	}
	return (num_array);
}

int	ft_len_or_array(char **num_array)
{
	int	i;

	i = 0;
	while (*num_array[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	**ft_change_array(char **num_array)
{
	int				i;
	int				ln_char;
	int				pos1;
	int				pos2;

	ln_char = ft_len_or_array(num_array);
	i = 0;
	printf("ln array: %i\n", ln_char);
	while (i < ln_char)
	{
		if (i > 3 && (ln_char - i) % 6 == 0 && num_array[i - 3][0] == '.')
			num_array[i - 1] = ft_itoa(ft_pow(10, (ln_char - i) / 2));
		if ((ln_char - i) % 6 == 0 && num_array[i][0] != '0')
			num_array[i + 1] = ft_itoa(100);
		if (num_array[i][0] == '.' && num_array[i - 1][0] == '1')
		{
			pos1 = *num_array[i - 1] - '0';
			pos2 = *num_array[i + 1] - '0';
			num_array[i] = ft_itoa(pos1 * 10 + pos2);
			num_array[i - 1] = "";
			num_array[i + 1] = "";
		}
		if ((ln_char - i + 3) % 6 == 0 /*&& num_array[i][0] == '.'*/ && num_array[i - 1][0] >= '2')
			num_array[i - 1][1] = '0';
		i++;
	}
	return (num_array);
}

unsigned long	ft_atoi(char *str)
{
	int				i;
	unsigned long	num;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num);
}

int	ft_break_string(char *str)
{
	unsigned long	num;
	int				i;
	int				ln_char;
	char			*num_array[37];

	num = ft_atoi(str);
	ft_draw_array_of_chars(num, num_array);
	ln_char = ft_len_or_array(num_array);
	ft_change_array(num_array);
	i = 0;
	while (num_array[i] != 0 && i < 37)
	{
		printf("%s\n", num_array[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*str = "1234";

	ft_break_string(str);
	return (0);
}