/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:25:11 by takumi            #+#    #+#             */
/*   Updated: 2023/06/30 15:05:13 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t number_count(long n)
{
    if(n<0)
        return 1+ number_count(-n);
    if(n/10 == 0)
    {
        return 1;
    }
    else
    {
        return 1 + number_count(n/10);
    }
        
}
char *ft_itoa(int n)
{
    size_t count;
    char *itoa;
    long buff_n;

    count = number_count(n);
    buff_n = n;
    itoa = ft_calloc(count + 1,sizeof(char*));
    if(!itoa)
        return NULL;
    if (n < 0)
		buff_n *= -1;
	itoa[count] = '\0';
	while (count > 0)
	{
		itoa[count - 1] = (buff_n % 10) + '0';
		buff_n /= 10;
		count--;
	}
    if (n < 0)
		itoa[count] = '-';
    return (itoa);
}


// #include <stdio.h>

// int main()
// {
//     int number;
//     number = -123456789;
//     printf("%zu",number_count(number));
// }