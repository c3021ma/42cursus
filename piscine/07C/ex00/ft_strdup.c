/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/27 19:23:41 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*ptr;
	int		i;

	len = ft_strlen(src);
	ptr = (char*) malloc (sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	main(void)
{
	char	*src_mine = "abcedario";
	char	*src_orig = "abcekadario";
	char	*ptr;

	printf("mine antes: %s, %p\n", src_mine, src_mine);
	ptr = ft_strdup(src_mine);
	printf("mine: %s, %p\n", ptr, ptr);
	printf("mem mine antes: %s, %p\n", src_orig, src_orig);
	ptr = strdup(src_orig);
	printf("mem mine: %s, %p\n", ptr, ptr);
	return (0);
}
