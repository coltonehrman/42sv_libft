/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:58:27 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/20 20:12:40 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	while (lst)
	{
		tmp = f(lst);
		map = ft_lstnew(tmp->content, tmp->content_size);
		if (!map)
			return (map);
		map = map->next;
		lst = lst->next;
	}
	return (map);
}
