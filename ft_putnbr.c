/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:08:13 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/20 13:44:08 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char c;

	if (n < 0)
	{
		ft_putchar('-');
		if (n == MININT)
			ft_putchar('2');
		ft_putnbr((n == MININT) ? ((n + 2000000000) * -1) : n * -1);
	}
	else
	{
		if (n > 9)
			ft_putnbr(n / 10);
		c = (char)((n % 10) + 48);
		ft_putchar(c);
	}
}
