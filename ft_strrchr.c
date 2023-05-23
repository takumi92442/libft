/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:54:25 by taksato           #+#    #+#             */
/*   Updated: 2023/05/23 16:35:20 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char* ft_strrchr(const char *s,int c)
{
	int	i;
	int mark;
	char *ptr;
	
	i = 0;
	mark = -1;
	ptr = (char *)s;
	while(s[i]!='\0')
	{
		printf("%d",i);
		if (s[i] == (unsigned char)c)
			mark = i;
		i++;
	}
	if ((unsigned char)c == '\0')
		return &ptr[i];
	if (mark == -1)
		return NULL;
	return &ptr[mark];
}

