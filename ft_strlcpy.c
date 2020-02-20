/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:19:34 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/19 19:18:44 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		src_len;
	int		i;

	if (!src || !dst)
		return (0);
	i = 0;
	src_len = ft_strlen(src);
	while (src[i] && dst[i] && dstsize > 1)
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	if (dstsize > 0)
		dst[i] = 0;
	return (src_len);
}

int main(void)
{
	ft_strlcpy(NULL, NULL, 10);
	return (0);
}
