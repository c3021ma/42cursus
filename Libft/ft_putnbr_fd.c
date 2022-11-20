/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/11/20 12:30:31 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	numstr;

	printf("n = %i\n", n);
	numstr = (char)ft_itoa(n);
	printf("nstr = %s\n", &numstr);
	ft_putstr_fd(&numstr, fd);
}

int	main(void)
{
	int	n;
	int	fd;

	n = -5453;
	fd = 1;
	ft_putnbr_fd(n, fd);
}