/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/10/25 18:40:53 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*fts1;
	unsigned char	*fts2;

	i = 0;
	fts1 = (unsigned char *)s1;
	fts2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*fts1 != *fts2)
			return (*fts1 - *fts2);
		i++;
		fts1++;
		fts2++;
	}
	return (0);
}
