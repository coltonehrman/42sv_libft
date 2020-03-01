/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:19:28 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/29 17:05:29 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	match;
	unsigned char	*ptr;

	match = (unsigned char)c;
	ptr = (unsigned char *)dst;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*ptr = *((unsigned char *)src);
		if (*ptr == match)
			return (ptr + 1);
		ptr++;
		src++;
		n--;
	}
	return (0);
}
