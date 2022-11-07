/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/10/06 18:24:00 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<ctype.h>
#include	"libft.h"

int	ft_isalnum(int c)
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
	else if (c >= '0' && c <= '9')
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
