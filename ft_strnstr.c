/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:39:49 by takumi            #+#    #+#             */
/*   Updated: 2023/06/21 16:44:46 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t haystack_len;
    size_t needle_len;
    size_t i;
    
    if (haystack == NULL && len == 0 && needle != NULL)
        return (NULL);
    haystack_len = ft_strlen(haystack);
    needle_len = ft_strlen(needle);
    if(needle_len == 0)
        return (char*)haystack;
    if(needle_len > haystack_len)
        return NULL;
    i = 0;
    while (i < len && i < haystack_len && i + needle_len <= len)
    {
    if (!ft_strncmp(&haystack[i], needle, needle_len))
        return ((char *)&haystack[i]);
    i++;
    }
    return NULL;
}
