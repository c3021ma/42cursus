/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/10/18 18:56:56 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ftdst;
	unsigned const char	*ftsrc;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	ftdst = dst;
	ftsrc = src;
	if (len == 0 || dst == src)
		return (dst);
	while (len--)
		ftdst[len] = ftsrc[len];
	return (dst);
}
