/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:46:48 by marvin            #+#    #+#             */
/*   Updated: 2023/05/19 15:33:52 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    if(c>=32&&c<=126)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

// #include<stdio.h>
// int main()
// {
//     for(int i =0;i<150;i++){
//         printf("%d %d\n",i,ft_isprint(i));
//     }
//     return 0;
// }