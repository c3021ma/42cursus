/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/20 11:57:37 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int i, char))
{
	unsigned int	i;
	char			*fts;

	i = 0;
	fts = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!fts)
		return (NULL);
	while (s[i])
	{
		fts[i] = f(i, s[i]);
		i++;
	}
	fts[i] = '\0';
	return (fts);
}
