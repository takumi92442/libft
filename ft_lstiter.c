/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 23:50:04 by takumi            #+#    #+#             */
/*   Updated: 2023/07/01 00:02:50 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *buff;
    t_list *now;
    if(lst == NULL || (*f) == NULL)
        return;
    now = lst;
    while(now != NULL)
    {
        buff = now->next;
        (*f)(now->content);
        now = buff;
    }
}