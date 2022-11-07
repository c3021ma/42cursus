/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreno- <fmoreno-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:53:41 by fmoreno-          #+#    #+#             */
/*   Updated: 2022/07/13 17:40:58 by fmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	x;
	int	y;

	x = a / b;
	y = a % b;
	*div = x;
	*mod = y;
}

int	main(void)
{
	int	*ptdiv;
	int	*ptmod;
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 7;
	b = 2;
	ptdiv = &div;
	ptmod = &mod;
	printf("\nvalores de a, b, div y mod antes de función: %i / %i = %i y %i\n", a, b, div, mod);
	ft_div_mod(a, b, ptdiv, ptmod);
	printf("valores de a, b, div y mod después de función: %i / %i = %i y %i\n", a, b, div, mod);
	return (0);
}
