/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:25:14 by taksato           #+#    #+#             */
/*   Updated: 2023/07/01 01:33:38 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_long;
	size_t src_long;
	
	src_long = ft_strlen(src);
	if(size == 0)
		return src_long;
	dst_long = ft_strlen(dst);
	if (size <= dst_long)
		return size + src_long;
	ft_strlcpy(&dst[dst_long],src,size - dst_long);
	if(size > dst_long)
		size = dst_long;
	return (size + src_long);
}

// #include <string.h>

// int main(void){
//     ft_strlcat(NULL, "qwert", 0);
//     strlcat(NULL, "qwert", 0);
//     return (0);
// }