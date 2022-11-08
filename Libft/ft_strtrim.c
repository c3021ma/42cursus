/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/08 19:08:47 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_in_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mem;
	char	*fts1;
	int		start;
	int		len;

	fts1 = (char *)s1;
	start = 0;
	len = ft_strlen(fts1);
	while (fts1[start] && ft_char_in_set(fts1[start], (char *)set))
	{
		start++;
	}
	while (len > start && ft_char_in_set(fts1[len - 1], (char *)set))
		len--;
	mem = ft_substr((char *)fts1, (unsigned int) start, (size_t) len - start);
	return (mem);
}
