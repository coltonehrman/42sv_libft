/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:12:24 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/19 14:21:14 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int	negative;

	i = 0;
	negative = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		negative = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		i *= 10;
		i += (int)((*str) - 48);
		str++;
	}
	return (i * negative);
}
