/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:11:08 by marvin            #+#    #+#             */
/*   Updated: 2023/05/18 14:11:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
size_t ft_strlen(const char *s);

size_t ft_strlen(const char *s)
{
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
//     printf("%d",ft_strlen(c));
// }

