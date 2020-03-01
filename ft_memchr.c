/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:57:20 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/29 17:05:47 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*c_s;

	c_s = (const unsigned char *)s;
	while (n > 0)
	{
		if (*c_s == (unsigned char)c)
			return ((void *)c_s);
		c_s++;
		n--;
	}
	return (0);
}
