/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:11:08 by marvin            #+#    #+#             */
/*   Updated: 2023/06/07 16:58:19 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlen(const char *s)
{
    if(s == NULL)
        return 0;
    size_t  i;
    i = 0;
    while(s[i])
    {
        i++;
    }
    return(i);
}

// #include<stdio.h>

// int main()
// {
//     char* c;
//     c = "12345678";
//     printf("%zu",ft_strlen(NULL));
// }

