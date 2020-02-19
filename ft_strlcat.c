/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:41:17 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/19 12:20:23 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	dst_len;
	int	src_len;
	int	to_append;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	to_append = ((int)dstsize) - dst_len - 1;
	i = 0;
	while (i < to_append && i <= src_len)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	return (dst_len + src_len);
}
