/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/08 19:11:21 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
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
