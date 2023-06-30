/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 23:05:59 by takumi            #+#    #+#             */
/*   Updated: 2023/06/30 23:45:32 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *buff;
    t_list *now;
    
    if(lst == NULL)
        return;
    if(del == NULL)
        return;
    now = *lst;
    while(now != NULL)
    {
        buff = now->next;
        (*del)(now->content);
        free(now);
        now = buff;
    }
    *lst = NULL;
}