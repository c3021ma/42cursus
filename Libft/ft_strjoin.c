/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/08 16:35:06 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	char	*fts1;
	char	*fts2;
	int		i;
	int		j;

	fts1 = (char *)s1;
	fts2 = (char *)s2;
	mem = ft_calloc(ft_strlen(fts1) + ft_strlen(fts2) + 1, sizeof(char));
	if (!mem)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(fts1))
	{
		mem[i] = fts1[i];
		i++;
	}
	while (j < ft_strlen(fts2))
	{
		mem[i + j] = fts2[j];
		j++;
	}
	mem[i + j] = '\0';
	return (mem);
}
