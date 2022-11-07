/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/26 12:12:07 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_fibonacci(int index)
{
	int	result;
	int	i;

	result = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	i = 1;
	if (i < index)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index -1));
	return (result);
}

int	main(void)
{
	int	index;
	int	fact;

	index = 3;
	fact = ft_fibonacci(index);
	printf("mi función: %i", fact);
	return (0);
}
