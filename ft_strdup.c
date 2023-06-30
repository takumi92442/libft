/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:13:02 by takumi            #+#    #+#             */
/*   Updated: 2023/07/01 01:52:24 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strdup(const char *str)
{
    size_t i;
    char* char_ptr;
    i = 0;
    size_t t;
    t = ft_strlen(str);
    char_ptr = (char*)malloc(sizeof(char) * t + 1);
    if(!char_ptr)
        return NULL;
    char_ptr[t] = '\0';
    while (i<t)
    {
        char_ptr[i] = str[i];
        i++;
    }
    return char_ptr;
    
}