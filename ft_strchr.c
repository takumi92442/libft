/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takumi <takumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:01:42 by taksato           #+#    #+#             */
/*   Updated: 2023/06/26 21:40:21 by takumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char* ft_strchr(const char *s,int c)
{
	while (*s != '\0')
	{
		
		if(*s==(char)c)
			return (char*)s;
		s++;
	}
	if(*s==(char)c)
		return (char*)s;
	return (NULL);
}