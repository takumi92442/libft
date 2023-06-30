/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:33:15 by taksato           #+#    #+#             */
/*   Updated: 2023/07/01 01:48:03 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void* ft_memcpy(void* buf1, const void *buf2, size_t n)
{
	unsigned char* ptr1;
	const unsigned char* ptr2;
	
	ptr1 = (unsigned char*)buf1;
	ptr2 = (const unsigned char*)buf2;
	if(ptr1 == NULL && ptr2 == NULL)
		return NULL;
	while(n>0)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
		n--;
	}
	return (void*)buf1;
}