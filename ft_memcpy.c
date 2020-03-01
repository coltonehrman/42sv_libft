/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:42:43 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/29 17:06:28 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dst;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*ptr = *((unsigned char *)src);
		ptr++;
		src++;
		n--;
	}
	return (dst);
}
