/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:50:14 by taksato           #+#    #+#             */
/*   Updated: 2023/05/23 17:25:14 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void* ft_memmove(void *buf1, const void *buf2, size_t n)
{
	unsigned char* ptr1;
	unsigned char* ptr2;
	
	ptr1 = (unsigned char*)buf1;
	ptr2 = (unsigned char*)buf2;

	while(n>0)
	{
		*ptr1 = *ptr2;
		n--;
		ptr1++;
		ptr2++;
	}
	return (void*)ptr2;
}

#include        <stdio.h>
#include        <string.h>

int main(void)
{
        char str[] = "abcdefghijklmnopqrstu";
        
        printf("移動前：%s\n",str);
        
        ft_memmove(str+5, str, 10);        /* 重複エリアのコピー */

        printf("移動後：%s\n",str);

        return 0;
}