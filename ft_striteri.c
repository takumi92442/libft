/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:19:11 by takumi            #+#    #+#             */
/*   Updated: 2023/07/01 02:04:24 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    size_t len;
    size_t i;

    if(s == NULL || f == NULL)
        return;
    len = ft_strlen(s);
    i = 0;
    while(i < len)
    {
        (*f)((unsigned int)i,&s[i]);
        i++;
    }
}