/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/03 17:36:55 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*mem;
	char	*fts1;
	size_t	i;

	fts1 = (char *)s1;
	mem = malloc(ft_strlen(fts1) + 1);
	if (!mem)
		return (NULL);
	i = 0;
	while (fts1[i] != '\0')
	{
		mem[i] = fts1[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
