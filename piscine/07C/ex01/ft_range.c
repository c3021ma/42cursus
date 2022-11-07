/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/28 17:16:26 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>

int	*ft_range(int min, int max)
{
	int		len;
	int		*ptr;
	int		i;

	len = max - min;
	printf("len: %i\n", len);
	if (len <= 0)
		{
			return (0);
		}
	else
	{
		ptr = (int*) malloc (sizeof(int) * len + 1);
		i = 0;
		while (i < max - min)
		{
			ptr[i] = min + i;
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

int	main(void)
{
	int		min;
	int		max;
	int		i;
	int		*ptr;

	min = 13;
	max = 10;
	i = 0;
	printf("mine antes: %i, %i\n", min, max);
	ptr = ft_range(min, max);
	if (ptr == 0)
		return (0);
	while (ptr[i] != '\0')
	{
		printf("mine: %i, %i\n", min, ptr[i]);
		i++;
	}
	
}
