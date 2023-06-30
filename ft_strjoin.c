/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:47:21 by takumi            #+#    #+#             */
/*   Updated: 2023/07/01 01:53:34 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t t;
    char *ptr;
    int i;
    
    if(s1 == NULL || s2 == NULL)
        return NULL;
    t = ft_strlen(s1) + ft_strlen(s2);
    i = 0;
    ptr = (char*)malloc(sizeof(char)*t);
    if(!ptr)
        return NULL;
    while (*s1 != '\0')
    {
        ptr[i] = *s1;
        i++;
        s1++;
    }
    while (*s2 != '\0')
    {
        ptr[i] = *s2;
        i++;
        s2++;
    }
    return ptr;
}