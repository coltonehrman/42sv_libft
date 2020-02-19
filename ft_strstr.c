/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:23:51 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/19 13:27:50 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack)
	{
		if (ft_strmatch((char *)haystack, (char *)needle))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}

int main(void)
{
	char *s2 = "FF";
	char *s1 = "see F your F return FF now FF";
	ft_strstr(s1, s2);
	return (0);
}
