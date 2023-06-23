/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:42:44 by takumi            #+#    #+#             */
/*   Updated: 2023/06/14 16:29:02 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *c1 = (const unsigned char*)s1;
    const unsigned char *c2 = (const unsigned char*)s2;
    
    while(n--)
    {
        if(*c1!=*c2)
            return (*c1 - *c2);
        c1++;
        c2++;
    }
    return (0);
}