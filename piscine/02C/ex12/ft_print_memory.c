/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/17 20:14:58 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

void	hexadecimal(unsigned int dec, char *hexa);

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	char			hexa[4];

	i = 0;
	hexa[0] = '\\';
	hexa[1] = 'd';
	hexa[2] = 'd';
	hexa[3] = '\0';
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			hexadecimal(str[i], hexa);
			write(1, &hexa, 3);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

void	hexadecimal(unsigned int dec, char *hexa)
{
	char			pos1;
	char			pos2;

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

int	main(void)
{
	char			*str;

	str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}
