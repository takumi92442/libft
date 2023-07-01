/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:32:19 by takumi            #+#    #+#             */
/*   Updated: 2023/06/10 16:50:47 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	c = (unsigned char)c;
	p = s;
	while (n--)
	{
		if (*p == c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
// #include <stdio.h>

// #include <stdlib.h>

// #include <string.h>

// int main(void)

// {
//     char buf[] = "ABCD5EFGH";

//     char *ch;

//     ch = (char*)ft_memchr(buf,'E',sizeof(buf));

//     if(ch!=NULL){

//         printf("検索文字から表示→%s\n",ch);

//     }else{

//         puts("検索文字が見つかりませんでした。");

//     }

//     return (0);

// }
