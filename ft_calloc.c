/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:10:45 by takumi            #+#    #+#             */
/*   Updated: 2023/06/26 18:06:05 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_calloc(size_t number, size_t size)
{
    if (number == 0 || size == 0)
	{
		number = 1;
		size = 1;
	}
	if (number > SIZE_MAX / size)
		return (NULL);
    void *ptr;
    ptr = (void*)malloc(number * size);
    if(!ptr)
        return NULL;
    ft_bzero(ptr,number * size);
    return ptr;
}