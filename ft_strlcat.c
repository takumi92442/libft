/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:25:14 by taksato           #+#    #+#             */
/*   Updated: 2023/06/07 16:50:50 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_long;
	size_t src_long;
	size_t i;
	size_t j;
	
	dst_long = ft_strlen(dst);
	src_long = ft_strlen(src);
	i = dst_long;
	j = 0;

	if (size <= dst_long)
		return size + src_long;
	while(j<(size-dst_long-1) && src[j] != '\0')
	{
		dst[i+j] = src[j];
		j++;
	}
	dst[i+j] = '\0';
	return src_long+dst_long;
}