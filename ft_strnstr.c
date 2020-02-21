/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:53:01 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/21 09:43:45 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	if (!(*needle))
		return ((char *)haystack);
	if (len < ft_strlen(needle))
		return (0);
	i = len;
	while (i > 0 && *haystack)
	{
		if (ft_strmatch((char *)haystack, (char *)needle))
			return ((char *)haystack);
		haystack++;
		i--;
	}
	return (0);
}
