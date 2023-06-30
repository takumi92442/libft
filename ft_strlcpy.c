/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:22:02 by taksato           #+#    #+#             */
/*   Updated: 2023/06/30 19:19:56 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t ft_strlcpy(char *  dst, const char *  src, size_t dstsize)
{
	unsigned long i;
	size_t  t;
	
	i = 0;
	t = ft_strlen(src);
	if(dstsize != 0)
	{
		while(i < dstsize-1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return t;

}