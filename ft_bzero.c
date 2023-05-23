/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:24:08 by taksato           #+#    #+#             */
/*   Updated: 2023/05/23 15:30:58 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void ft_bzero(void *s, size_t n)
{
	unsigned char* ptr;
	ptr = (unsigned char*)s;
	int i;
	i = 0;
	while(i<(int)n)
	{
		ptr[i] = '\0';
		i++;
	}
}