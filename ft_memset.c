/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:32:57 by taksato           #+#    #+#             */
/*   Updated: 2023/05/23 15:48:30 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
void* ft_memset(void *b, int c, size_t len)
{
	unsigned char* ptr;
	ptr = (unsigned char*)b;
	unsigned char C;
	C = (unsigned char)c;
	int i;
	i = 0;
	while(i<(int)len)
	{
		ptr[i] = C;
		i++;
	}
	return (void*)ptr;
}