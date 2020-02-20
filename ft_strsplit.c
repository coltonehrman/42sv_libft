/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 10:17:00 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/20 10:57:35 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		i[2];
	int		len;

	if (!s)
		return (0);
	words = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	i[0] = 0;
	i[1] = 0;
	while (*s)
	{
		if (!i[1] && !ft_isspace(*s) && *s != c)
		{
			len = ft_count_till(s, c);
			words[i[0]] = ft_strsub(s, 0, len);
			i[0]++;
			i[1] = 1;
		}
		else if (ft_isspace(*s) || *s == c)
			i[1] = 0;
		s++;
	}
	words[i[0]] = 0;
	return (words);
}
