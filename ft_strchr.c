/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:01:42 by taksato           #+#    #+#             */
/*   Updated: 2023/05/23 16:15:37 by taksato          ###   ########.fr       */
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
	if(*s==c)
		return (char*)s;
	return (NULL);
}