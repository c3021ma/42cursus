/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/29 16:52:48 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*mem;
	unsigned int	i;
	size_t			j;

	if (start > (unsigned int)ft_strlen(s))
		mem = ft_calloc(1, sizeof(char));
	else if (len + (size_t)start > (size_t)ft_strlen(s))
		mem = ft_calloc(ft_strlen(s) + 1 - start, sizeof(char));
	else
		mem = ft_calloc(len + 1, sizeof(char));
	if (!mem)
		return (NULL);
	i = 0;
	j = 0;
	while ((int)i < ft_strlen(s))
	{
		if (i >= start && j < len)
		{
			mem[j] = s[i];
			j++;
		}
		i++;
	}
	mem[j] = '\0';
	return (mem);
}
