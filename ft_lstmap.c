/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 00:03:19 by takumi            #+#    #+#             */
/*   Updated: 2023/07/01 11:18:22 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map_now;
	t_list	*map_next;
	t_list	*return_map;

	if (lst == NULL || del == NULL || f == NULL)
		return (NULL);
	map_now = ft_lstnew((*f)(lst->content));
	if (!map_now)
		return (NULL);
	return_map = map_now;
	lst = lst->next;
	while (lst != NULL)
	{
		map_next = ft_lstnew((*f)(lst->content));
		if (!map_next)
		{
			ft_lstclear(&return_map, del);
			return (NULL);
		}
		map_now->next = map_next;
		map_now = map_next;
		lst = lst->next;
	}
	return (return_map);
}
