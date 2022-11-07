/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_break_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:26:53 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/27 15:42:52 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

int				ft_str_is_numeric(char *str);
int				ft_len_nbr(int num);
int				ft_pow(int num, int pow);
char			*ft_itoa(int num);
unsigned long	ft_atoi(char *str);

char	**ft_draw_array_of_chars(unsigned long num, char **num_array)
{
	int				i;
	int				ln;
	unsigned long	num_brk;

	ln = ft_len_nbr(num);
	i = 0;
	while (i < ln * 2)
	{
		num_brk = (num / ft_pow(10, ln - 1 - i / 2));
		num = num - (num_brk) * ft_pow(10, ln - 1 - i / 2);
		if (num_brk == 0)
			num_array[i] = "0";
		else
			num_array[i] = ft_itoa(num_brk);
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
	while (i < ln_char)
	{
		if ((ln_char - i) % 6 == 0)
			num_array[i - 1] = ft_itoa(ft_pow(10, (ln_char - i) / 2));
		if ((ln_char - i) % 6 == 0 && num_array[i][0] != '0')
			num_array[i + 1] = ft_itoa(100);
		else if (num_array[i][0] == '.' && num_array[i - 1][0] == '1')
		{
			pos1 = *num_array[i - 1] - '0';
			pos2 = *num_array[i + 1] - '0';
			num_array[i - 1] = ft_itoa(pos1 * 10 + pos2);
			num_array[i + 1] = "";
		}
		if ((ln_char - i + 3) % 6 == 0 && num_array[i - 1][0] >= '2')
			num_array[i - 1][1] = '0';
		i++;
	}
	return (num_array);
}

int	ft_break_string(char *str)
{
	unsigned long	num;
	int				i;
	char			pos1;
	int				ln_char;
	char			*num_array[37];

	num = ft_atoi(str);
	ft_draw_array_of_chars(num, num_array);
	ln_char = ft_len_or_array(num_array);
	ft_change_array(num_array);
	i = 0;
	while (num_array[i] != 0 && i < 37)
	{
		if (num_array[i][0] == '.' || num_array[i][0] == '0')
			num_array[i] = ft_itoa(0);
		if (num_array[i][0] <= '0')
		{
			pos1 = *num_array[i + 1];
			num_array[i] = ft_itoa(pos1);
			i++;
		}
		printf("%s\n", num_array[i]);
		i++;
	}
	printf("size: %i\n", ln_char);
	return (0);
}

int	main(void)
{
	char	*str = "123456719";

	ft_break_string(str);
	return (0);
}
