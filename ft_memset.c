/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:32:57 by taksato           #+#    #+#             */
/*   Updated: 2023/07/01 11:27:31 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	char_c;
	int				i;

	ptr = (unsigned char *)b;
	char_c = (unsigned char)c;
	i = 0;
	while (i < (int)len)
	{
		ptr[i] = char_c;
		i++;
	}
	return ((void *)ptr);
}
