/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/03 16:32:55 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		negs;
	char	*ftstr;

	i = 0;
	num = 0;
	negs = 1;
	ftstr = (char *)str;
	while ((ftstr[i] >= 9 && ftstr[i] <= 13) || ftstr[i] == 32)
		i++;
	if (ftstr[i] == '+')
		i++;
	else if (ftstr[i] == '-')
	{
		negs = -1;
		i++;
	}
	while (ftstr[i] >= 48 && ftstr[i] <= 57)
	{
		num = (num * 10) + ftstr[i] - 48;
		i++;
	}
	return (num * negs);
}
