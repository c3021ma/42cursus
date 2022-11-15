/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/15 18:19:27 by fmoreno-         ###   ########.fr       */
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
			split[j] = ft_substr(s, start, i - start);
			j++;
			start = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
