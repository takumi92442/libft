/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:23:10 by takumi            #+#    #+#             */
/*   Updated: 2023/07/01 01:59:21 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    if (s1 == NULL || set == NULL)
		return (NULL);
    size_t t;
    size_t i;
    char *ptr;
    
    t = ft_strlen(s1);
    i = 0;
    while (s1[i] != '\0' && ft_strchr(set,s1[i]))
    {
        i++;
    }
    //前半の文字消し
    while (t > i && ft_strchr(set,s1[t-1]))
    {
        t--;
    }
    //後半消し
    ptr = ft_calloc(t-i + 1,sizeof(char));
    if(!ptr)
        return NULL;
    ft_strlcpy(ptr,&s1[i],t - i + 1);
    return ptr;
}

