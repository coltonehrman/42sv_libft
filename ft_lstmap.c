/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cehrman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:58:27 by cehrman           #+#    #+#             */
/*   Updated: 2020/02/29 17:03:55 by cehrman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map;
	t_list	*tmp;
	t_list	*map_root;

	if (!lst || !f)
		return (0);
	map_root = 0;
	map = 0;
	while (lst)
	{
		tmp = f(lst);
		(!map) ?
			(map = ft_lstnew(tmp->content, tmp->content_size)) :
			(map->next = ft_lstnew(tmp->content, tmp->content_size));
		free(tmp);
		if (!map_root)
			map_root = map;
		if (!map)
			return (map_root);
		else if (map->next)
			map = map->next;
		lst = lst->next;
	}
	return (map_root);
}
