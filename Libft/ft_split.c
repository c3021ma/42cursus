/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/29 19:15:24 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_slices(const char *s, char c)
{
	int		i;
	int		cut;

	i = 0;
	cut = 0;
	while (*s)
	{
		if (*s != c && cut == 0)
		{
			cut = 1;
			i++;
		}
		else if (*s == c)
			cut = 0;
		s++;
	}
	return (i);
}

static char	*ft_split_in(char const *s, int start, int i)
{
	char	*split;

	split = ft_substr(s, start, i - start);
	if (!split)
		return (NULL);
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**split;

	split = ft_calloc((ft_count_slices(s, c) + 1), sizeof(char *));
	if (!split || !s)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			split[j++] = ft_split_in(s, start, i);
			start = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
