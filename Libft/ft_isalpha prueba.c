/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha prueba.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/07 19:54:15 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<ctype.h>
#include	"libft.h"

int	ft_isalpha(int c)
{
	int				n;

	n = 1;
	if (c >= 'a' && c <= 'z')
	{
		n = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
