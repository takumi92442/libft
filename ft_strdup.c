/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:13:02 by takumi            #+#    #+#             */
/*   Updated: 2023/06/26 17:18:14 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strdup(const char *str)
{
    size_t i;
    i = 0;
    size_t t;
    t = ft_strlen(str);
    
    char *char_ptr;
    char_ptr = (char*)malloc(sizeof(char) * t);
    while (i<t)
    {
        char_ptr[i] = str[i];
        i++;
    }
    return char_ptr;
    
}