/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:33:15 by taksato           #+#    #+#             */
/*   Updated: 2023/05/23 17:12:50 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void* ft_memcpy(void* buf1, const void *buf2, size_t n)
{
	unsigned char* ptr1;
	unsigned char* ptr2;
	ptr1 = (unsigned char*)buf1;
	ptr2 = (unsigned char*)buf2;
	while(n>0)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
		n--;
	}
	return (void*)ptr1;
}