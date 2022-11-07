/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/03 19:00:53 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*mem;
	char			*fts;
	unsigned int	i;
	size_t			j;

	fts = (char *)s;
	if (len > (size_t)ft_strlen(fts))
		mem = ft_calloc(ft_strlen(fts) + 1, sizeof(char));
	else
		mem = ft_calloc(len + 1, sizeof(char));
	if (!mem)
		return (NULL);
	i = 0;
	j = 0;
	while ((int)i < ft_strlen(fts))
	{
		if (i >= start && j < len)
		{
			mem[j] = fts[i];
			j++;
		}
		i++;
	}
	mem[j] = '\0';
	return (mem);
}
