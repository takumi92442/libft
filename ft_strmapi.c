/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksato <taksato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:10:03 by takumi            #+#    #+#             */
/*   Updated: 2023/07/01 20:51:03 by taksato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*mapi;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	mapi = ft_calloc(len + 1, sizeof(char));
	if (!mapi)
		return (NULL);
	mapi[len] = '\0';
	i = 0;
	while (i < len)
	{
		mapi[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	return (mapi);
}
