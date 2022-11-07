/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/07 19:41:27 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*fthay;
	char	*ftnee;

	fthay = (char *)haystack;
	ftnee = (char *)needle;
	if (!*needle || !len)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (fthay[i] && i< len)
	{
		if (fthay[i] != ftnee[j])
			i++;
		else
		{
			j = 0;
			while (fthay[i + j] == ftnee[j] && ftnee[j] && i + j < len)
				j++;
			if (!ftnee[j])
				return ((char *)haystack + i);
			i++;
		}
	}
	return (NULL);
}
