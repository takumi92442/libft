/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 22:18:33 by takumi            #+#    #+#             */
/*   Updated: 2023/06/30 22:23:39 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int size;

    size = 0;
    while(lst != NULL)
    {
        size++;
        lst = lst->next;
    }
    return (size);
}