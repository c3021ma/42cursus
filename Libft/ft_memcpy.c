/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/10/13 18:47:31 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ftdst;
	const unsigned char	*ftsrc;

	i = 0;
	ftdst = dst;
	ftsrc = src;
	while (i < n)
	{
		if (dst != NULL || src != NULL)
		{
			ftdst[i] = ftsrc[i];
			i++;
		}
		else
			return (NULL);
	}
	return (dst);
}
