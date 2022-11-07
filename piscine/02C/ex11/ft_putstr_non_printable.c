/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/19 12:00:05 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

void	hexadecimal(unsigned char dec, char *hexa)
{
	unsigned char			pos1;
	unsigned char			pos2;

	pos1 = dec / 16;
	pos1 = pos1 + '0';
	pos2 = (dec % 16);
	if (pos2 > 9)
	{
		pos2 = pos2 + 87;
	}
	else
	{
		pos2 = pos2 + '0';
	}
	hexa[0] = '\\';
	hexa[1] = pos1;
	hexa[2] = pos2;
	hexa[3] = '\0';
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	char			hexa[4];

	i = 0;
	hexa[0] = '\\';
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
		{
			write(1, &str[i], 1);
		}
		else if (str[i] < 0)
		{
			hexadecimal(-str[i], hexa);
			write(1, &hexa, 3);
		}
		else
		{
			hexadecimal(str[i], hexa);
			write(1, &hexa, 3);
		}
		i++;
	}
}

int	main(void)
{
	char	str[100] = "Coucou\ntu vas bien ?";

	str[1] = -25;
	str[8] = 127;
	ft_putstr_non_printable(str);
	return (0);
}
