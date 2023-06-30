/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 22:31:34 by takumi            #+#    #+#             */
/*   Updated: 2023/06/30 22:56:38 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    
    if(lst == NULL)
        return;
    if(new == NULL)
        return;
     last = ft_lstlast(*lst);
    if(last == NULL)
    {
        *lst = new;
        return;
    }
    last->next = new;
}